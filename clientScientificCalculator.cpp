#include "scientificCalculator.h"
#include <iomanip>
#include <iostream>
#include <string>						//allows the use of strings

using namespace std;

void firstChoice(int option, int choice, int decision);
int simpleMenu(int choice);
int conversionMenu(int decision);
void simpleMath(int choice);
void conversionMath(int decision);

void add();
void subtract();
void divide();
void multiple();
void tangent();
void sine();
void logs();
void logsTen();
void cosine();
void raiseSecondPower();
void raiseANumber();
void squareRoot();

void feetToMeters();
void metersToFeet();
void centimetersToInches();
void inchesToCentimeters();
void inchesToMillimeters();
void millimetersToInches();
void yardsToMeters();
void metersToYards();
void milesToKilometers();
void kilometersToMiles();
void nauticalmilesToKilometers();
void nauticalmilesToMiles();

int main()
{
	int choice = 0;
	int decision = 0;
	int option = 0;

	cout << "Welcome to the Scientific Calculator!" << "\n" << endl;

	firstChoice(option, choice, decision);
}

void firstChoice(int option, int choice, int decision)
{
	cout << "Would you like to do simple math or a conversion? Simple = 1, conversion = 2: " << endl;
	cin >> option;

	if(option == 1)
	{
		choice = simpleMenu(choice);

		simpleMath(choice);
	}

	else if(option == 2)
	{
		decision = conversionMenu(decision);

		conversionMath(decision);
	}
}

int simpleMenu(int choice)
{
	cout << "\n" << "Menu: " << endl;
	cout << "FYI: 1-5 take two numbers while the others do not." << "\n" << endl;

	cout << "1.) Add" << endl;
	cout << "2.) Subtract" << endl;
	cout << "3.) Divide" << endl;
	cout << "4.) Multiple" << endl;
	cout << "5.) Raise a number by your choice" << endl;
	cout << "6.) Tangent" << endl;
	cout << "7.) Sine" << endl;
	cout << "8.) Logarithm" << endl;
	cout << "9.) Logarithm 10" << endl;
	cout << "10.) Cosine" << endl;
	cout << "11.) Square a number" << endl;
	cout << "12.) Square root" << endl;
	cout << "13.) Exit the program" << "\n" << endl;

	cout << "Please Enter in your choice:" << endl;
	cin >> choice;

	return choice;
}

int conversionMenu(int decision)
{
	cout << "\n" << "Menu: " << "\n" << endl;

	cout << "1.) Feet to Meters" << endl;
	cout << "2.) Meters to Feet" << endl;
	cout << "3.) Centimeters to Inches" << endl;
	cout << "4.) Inches to Centimeters" << endl;
	cout << "5.) Inches to Millimeters" << endl;
	cout << "6.) Millimeters to Inches" << endl;
	cout << "7.) Yards to Meters" << endl;
	cout << "8.) Mteters to Yards" << endl;
	cout << "9.) Miles to Kilometers" << endl;
	cout << "10.) Kilometers to Miles" << endl;
	cout << "11.) Nautical Miles to Kilometers" << endl;
	cout << "12.) Nautical Miles To Miles" << endl;
	cout << "13.) Exit the program" << "\n" << endl;

	cout << "Please Enter in your choice:" << endl;
	cin >> decision;

	return decision;
}

void simpleMath(int choice)
{
	do
	{
		if(choice == 1)
		{
			add();
		}

		else if(choice == 2)
		{
			subtract();
		}

		else if(choice == 3)
		{
                        divide();
		}

		else if(choice == 4)
		{
                        multiple();
		}

		else if(choice == 5)
		{
                        raiseANumber();
		}

		else if(choice == 6)
		{
			tangent();
		}

		else if(choice == 7)
		{
			sine();
		}

		else if(choice == 8)
		{
			logs();
		}

			else if (choice == 9)
		{
			logsTen();
		}

		else if(choice == 10)
		{
			cosine();
		}

		else if(choice == 11)
		{
			raiseSecondPower();
		}

		else if(choice == 12)
		{
			squareRoot();
		}

		choice = simpleMenu(choice);

	}while(choice != 13);
}

void conversionMath(int decision)
{
	do
	{
		if(decision == 1)
		{
			feetToMeters();
		}

		else if(decision == 2)
		{
			metersToFeet();
		}

		else if(decision == 3)
		{
			centimetersToInches();
		}

		else if(decision == 4)
		{	
			inchesToCentimeters();
		}

		else if(decision == 5)
		{
			inchesToMillimeters();
		}

		else if(decision == 6)
		{
			millimetersToInches();
		}

		else if(decision == 7)
		{
			yardsToMeters();
		}

		else if(decision == 8)
		{
			metersToYards();
		}

		else if (decision == 9)
		{
			milesToKilometers();
		}

		else if(decision == 10)
		{
			kilometersToMiles();
		}

		else if(decision == 11)
		{
			nauticalmilesToKilometers();
		}

		else if(decision == 12)
		{
			nauticalmilesToMiles();
		}

		decision = conversionMenu(decision);

	}while(decision != 13);
}