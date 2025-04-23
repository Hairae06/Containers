// Containers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <array>
#include <print>
#include <vector>
#include <list>
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

	vector<int> num[5];

	list<string> fruit[3];


}
