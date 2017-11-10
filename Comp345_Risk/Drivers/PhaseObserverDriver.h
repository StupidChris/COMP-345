// ==============================
//           COMP-345 D
//          Assignment 3
//  ----------------------------
//  Christophe Savard,  40017812
//  David Di Feo,       27539800
//  Paul Weber,         27057938
//  Steven Tucci,       40006014
//  Adriano Monteclavo, 40009257
// ==============================

#pragma once

#include "../Base/Driver.h"

class PhaseObserverDriver : public Driver
{
public:
	PhaseObserverDriver();
	~PhaseObserverDriver();

	void run() override;
	string getOpeningMessage() override;
	string getClosingMessage() override;
};

