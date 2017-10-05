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
	string keyeast = "no";
	string weapon = "no";
	string keyend = "no";

	cout << "What is your name?";
	cin >> name;

	if (location == "start")
	{
		cout << "Alright, " << name << ". You find your self in a dark room. There is a door to our North, South, East and West.\n";
		cin >> userChoice;
	}

	if (userChoice == "West" || userChoice == "west" || userChoice == "w")
	{
		cout << "There is a chest in the middle of the room and door behind it.\n";
	}

	if (userChoice == "East" || userChoice == "east" || userChoice == "e")
	{
		cout << "There is a ladder and a dark cave towards the back of the room.\n";
	}

	if (userChoice == "North" || userChoice == "north" || userChoice == "n")
	{
		location = "north";
		cout << "You stand at the entrance of a long hallway with two doors on each side. You think you saw something move at the end of the hallway.\n";
		cin >> userChoice;
	}


	if (userChoice == "start" || userChoice == "beginning" || userChoice == "b")
	{
		location = "start";
		cout << "You find your self in a dark room. There is a door to our North, South, East and West.\n";
		cin >> userChoice;
	}
	
	if (userChoice == "south" || userChoice == "South" || userChoice == "s")
	{
		location = "south";
		cout << "There is a monster in this room. It approaches you. What do you do?\n";
		cin >> userChoice;

		if (userChoice == "start" || userChoice == "beginning" || userChoice == "b")
		{
			location = "start";
			cout << "You find your self in a dark room. There is a door to our North, South, East and West.\n";
			cin >> userChoice;
		}

		if (userChoice == "attack" || userChoice == "Attack" || userChoice == "a" && weapon == "gun")
		{
			cout << "You shot and killed the monster! The monster's body falls to the floor and you notice a door at the end of the hallway.\n";
			cin >> userChoice;
			if (userChoice == "open" || userChoice == "Open" && keyend == "yes")
			{
				cout << "Congrats! You have beat my game!\n";
				cin >> userChoice;
			}
			else
			{
				cout << "You must not have the right key or any key at all.\n";
			}
		}
		else
		{
			cout << "You weren't strong enough to defeat the monster, and he killed you.\n";
			health = health - 3;
		}
	}

	if (health == 0)
	{
		cout << "Game over, you lose.\n";
		cin >> userChoice;
	}

    return 0;
}

