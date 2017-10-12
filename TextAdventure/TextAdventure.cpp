// TextAdventure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	string location = "start";
	int health = 3;
	string userChoice;
	string weapon = "no";
	string keyend = "no";

	cout << "What is your name?";
	std::cin >> name;


	while (userChoice != "q" && userChoice != "Q")
	{
		if (location == "start")
		{
			cout << "Alright, " << name << ". You find your self in a dark room. There is a door to our North, South, East and West.\n";
			std::cin >> userChoice;

			if (userChoice == "West" || userChoice == "west" || userChoice == "w")
			{
				location = "west";
			}

			else if (userChoice == "East" || userChoice == "east" || userChoice == "e")
			{
				location = "east";
			}

			else if (userChoice == "North" || userChoice == "north" || userChoice == "n")
			{
				location = "north";
			}

			else if (userChoice == "south" || userChoice == "South" || userChoice == "s")
			{
				location = "south";
			}

			else
			{
				cout << "I don't understand.\n";
			}

		}

		if (location == "West" || location == "west" || location == "w")
		{
			location = "west";
			cout << "There is a chest in the middle of the room and door behind it.\n";
			std::cin >> userChoice;

			if (userChoice == "open chest" || userChoice == "oc")
			{
				cout << "You have found a small knife in the chest, you're attack is stronger now.\n";
				weapon = "small knife";
				std::cin >> userChoice;
			}

			else if (userChoice == "open door" || userChoice == "od")
			{
				location = "west door";
			}

			else if (userChoice == "start" || userChoice == "Start" || userChoice == "s")
			{
				location = "start";
			}

			else
			{
				cout << "I don't understand.\n";
			}

		}

		if (location == "east")
		{
			location = "east";
			cout << "There is a ladder and a dark cave towards the back of the room.\n";
			std::cin >> userChoice;

			if (userChoice == "climb ladder" || "c" || "l")
			{
				location = "highRoom";
			}

			else if (userChoice == "cave" || "ca")
			{
				location = "cave";
			}

			else if (userChoice == "start" || "Start" || "s")
			{
				location = "start";
			}

			else
			{
				cout << "I don't understand.\n";
			}

		}

		if (location == "north")
		{
			location = "north";
			cout << "You stand at the entrance of a long hallway with two doors on each side. You think you saw something move at the end of the hallway.\n";
			std::cin >> userChoice;

			if (userChoice == "start" || "s")
			{
				location = "start";
			}

		}

		if (location == "south")
		{
			location = "south";
			cout << "There is a huge monster in this room. It has huge claws and teeth, and looks very hard to kill. It approaches you. What do you do?\n";
			std::cin >> userChoice;

			if (userChoice == "start" || userChoice == "beginning" || userChoice == "s")
			{
				location = "start";
				cout << "You find your self in a dark room. There is a door to our North, South, East and West.\n";
				std::cin >> userChoice;
			}

			
		}
	}


	if (health == 0)
	{
		cout << "Game over, you lose.\n";
		userChoice = "q";
	}
	return 0;
}