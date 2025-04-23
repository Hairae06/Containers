// Containers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <array>
#include <print>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main()
{

	array<string, 7> daysOfTheWeek;
	daysOfTheWeek[0] = "Monday";
	daysOfTheWeek[1] = "Tuesday";
	daysOfTheWeek[2] = "Wednesday";
	daysOfTheWeek[3] = "Thursday";
	daysOfTheWeek[4] = "Friday";
	daysOfTheWeek[5] = "Saturday";
	daysOfTheWeek[6] = "Sunday";

	for (int i = 0; i < 7; i++)
	{
		cout << daysOfTheWeek[i] + "\n";
	}

	vector<int> intVector = { 1, 2, 3, 4, 5 };
	intVector.push_back(6);
	intVector.push_back(7);
	intVector.pop_back();

	for (int i = 0; i < 6; i++)
	{
		cout << intVector[i] + "\n";
	}

	list<string> fruit = {"Apple", "Bannana", "Peach"};
	fruit.push_back("Green Bannana");
	fruit.push_front("Green Apple");
	fruit.remove("Green Bannana");

	for (int i = 0; i < 4; i++)
	{
		cout << fruit[i] + "\n";
	}

	map<string, int> stringMapInt;
	stringMapInt[0] = ("apples", 10);

	for (int i = 0; i < 4; i++)
	{
		cout << stringMapInt[i] + "\n";
	}



}
