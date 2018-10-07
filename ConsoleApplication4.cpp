// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>



int main()
{
	bool signflag;
	bool convexflag = 1;
	std::string str;
	std::getline(std::cin, str);
	int end = str.size();

	int a1 = 0, a2 = 0, a3 = 0, b1 = 0, b2 = 0, b3 = 0;
	a1 = str[0];
	b1 = str[2];
	a2 = str[4];
	b2 = str[6];
	a3 = str[8];
	b3 = str[10];


	if ((a2 - a1)*(b3 - b2) - (b2 - b1)*(a3 - a2) >= 0)
	{
		signflag = 1;
	}
	else
	{
		signflag = 0;
	}
	for(int i=12;i<end;)
	{
		a1 = a2;
		b1 = b2;
		a2 = a3;
		b2 = b3;
		a3 = str[i];
		b3 = str[i + 2];
		if (signflag == 0 && (a2 - a1)*(b3 - b2) - (b2 - b1)*(a3 - a2) >= 0)
		{
			std::cout<<"concave";
			convexflag = 0;
			break;

		}
		if ((a2 - a1)*(b3 - b2) - (b2 - b1)*(a3 - a2) < 0 && signflag == 1)
		{
			std::cout << "concave";
			convexflag = 0;
			break;
		}
		i += 4;
	}
	if (convexflag == 1)
	{
		std::cout << "convex";
	}







}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
