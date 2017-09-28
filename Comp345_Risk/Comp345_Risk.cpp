#include <cstdio>
#include <iostream>
#include <vector>
#include "Drivers/Driver.h";
#include "Drivers/CardDriver.h"
#include "Drivers/MapLoaderDriver.h"
#include "Drivers/MapDriver.h"

//Comp345_Risk.cpp : Defines the entry point for the console application.
int main()
{
	MapDriver map;
	MapLoaderDriver loader;
	CardDriver card;
	std::vector<Driver*> drivers(3);
	drivers[0] = &map;
	drivers[1] = &loader;
	drivers[2] = &card;

	const std::string endll = "\n\n";

	std::cout << "Beginning driver tests" << endll;
	for (Driver* d : drivers)
	{
		std::cout << "=====================================================================" << endll;
		std::cout << d->getOpeningMessage() << endll;
		d->run();
		std::cout << std::endl << d->getClosingMessage() << endll;
	}
	std::cout << "=====================================================================" << endll;
	std::cout << "Ended driver tests" << endll;

	std::cout << "Press any key to exit...";
	getchar();
}
