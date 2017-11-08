// ==============================
//           COMP-345 D
//          Assignment 2
//  ----------------------------
//  Christophe Savard,  40017812
//  David Di Feo,       27539800
//  Paul Weber,         27057938
//  Steven Tucci,       40006014
//  Adriano Monteclavo, 40009257
// ==============================

#pragma once

#include "../Base/RiskObject.h"
#include "../Map/RiskMap.h"
#include "../Patterns/Observer/Subject.h"
#include "GameState.h"
#include "GamePhase.h"

using std::vector;


class Game : public RiskObject, public Subject
{
public:

	Game();
	Game(vector<Player*>* players, RiskMap* map);
	~Game();
	void gameLoop();
	void setup();
	RiskMap* getMap() const;
	GameState getGameState();

	void setCurrentPlayerTurnAndPhase(Player* player, GamePhase phase);
	// TODO(steven) in the future these actions should be action objects instead of strings
	// for now just save strings
	void logAction(const std::string action);


private:
	std::pair<bool, Player*> checkWin() const;
	bool owned;
	int numPlayers;
	vector<Player*>* players;
	RiskMap* map;
	// Who is currently playing
	Player* currentPlayerTurn;
	// The current phase that the current currentPlayerTurn is in
	GamePhase currentPhase;
	// List of recent actions/couts
	std::vector <std::string> recentActions;
};
