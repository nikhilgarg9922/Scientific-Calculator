#include "scientificCalculator.h"
#include <iomanip>
#include <iostream>
#include <cmath>						//allows you the use of long/hard math
#include <string>						//allows the use of strings
#include <math.h>

using namespace std;

//this first part is the simple math
void add()		//adds
{
	double num1;
	double num2;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	cout << "Please enter your second number: " << endl;
	cin >> num2;

	double answer = num1 + num2;

	cout << "Your problem was: " << num1 << " + " << num2 << endl;
	cout << "Your answer is: " << answer << "\n" << endl;
}

void subtract()		//subtracts
{
	double num1;
	double num2;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	cout << "Please enter your second number: " << endl;
	cin >> num2;

	double answer = num1 - num2;

	cout << "Your problem was: " << num1 << " - " << num2 << endl;
	cout << "Your answer is: " << answer << "\n" << endl;
}

void divide()		//divdes
{
	double num1;
	double num2;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	cout << "Please enter your second number: " << endl;
	cin >> num2;

	double answer = num1 / num2;

	cout << "Your problem was: " << num1 << " / " << num2 << endl;
	cout << "Your answer is: " << answer << "\n" << endl;
}

void multiple()		//multiples
{
	double num1;
	double num2;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	cout << "Please enter your second number: " << endl;
	cin >> num2;

	double answer = num1 * num2;

	cout << "Your problem was: " << num1 << " * " << num2 << endl;
	cout << "Your answer is: " << answer << "\n" << endl;
}

void tangent()		//does the tangent of the number the user chooses 
{
	double num1;
	double pi= 3.14159265;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = tan(num1 * pi / 180);

	cout << "Your problem was: " << num1  << " * PI / 180" << endl;
	cout << "Your answer is: " << answer << "\n" << endl;
}

void sine()		//does the sine of the number the user chooses 
{
	double num1;
	double pi= 3.14159265;
	
	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = sin(num1 * pi / 180);

	cout << "Your problem was: " << num1  << " * PI / 180" << endl;
	cout << "Your answer is: " << answer << "\n" << endl;
}

void logs()		//does the logarithm of the number the user chooses
{
	double num1;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = log(num1);

	cout << "Your problem was: log(" << num1 << ")" << endl;
	cout << "Your answer is: " << answer << "\n" << endl;
}

void logsTen()		//does the logarithm of the number the user chooses but to the 10th
{
	double num1;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = log10(num1);

	cout << "Your problem was: log10(" << num1 << ")" << endl;
	cout << "Your answer is: " << answer << "\n" << endl;
}

void cosine()		//does the cosine of the number the user chooses
{
	double num1;
	double pi= 3.14159265;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = cos(num1 * pi / 180);

	cout << "Your problem was: " << num1 << " * PI / 180" << endl;
	cout << "Your answer is: " << answer << "\n" << endl;
}

void raiseSecondPower()		//raises the users number by the second power
{
	double num1;
	double two = 2;

	cout << "Please enter your first number: " << endl;
	cin >> num1;


	double answer = pow(num1, two);

	cout << "Your problem was: " << num1 << " ^ " << two << endl;
	cout << "Your answer is: " << answer << "\n" << endl;
}

//raises the users first number by the users second number, the second number becomes the raised power
void raiseANumber()
{
	double num1;
	double num2;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	cout << "Please enter your second number: " << endl;
	cin >> num2;

	double answer = pow(num1, num2);

	cout << "Your problem was: " << num1 << " ^ " << num2 << endl;
	cout << "Your answer is: " << answer << "\n" << endl;
}

void squareRoot()		//does the square root of the users number
{
	double num1;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = sqrt(num1);

	cout << "Your problem was: " << num1 << endl;
	cout << "Your answer is: " << answer << "\n" << endl;
}







//this second part is the conversion math
void feetToMeters()
{
	double num1;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = num1 * 0.3048;

	cout << "Your problem was: " << num1 << "feet * 0.3048" << endl;
	cout << "Your answer is: " << answer << "meters \n" << endl;
}

void metersToFeet()
{
	double num1;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = num1 * 3.281;

	cout << "Your problem was: " << num1 << " * 3.281" << endl;
	cout << "Your answer is: " << answer << "\n" << endl;
}

void centimetersToInches()
{
	double num1;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = num1 * 0.3937;

	cout << "Your problem was: " << num1 << "centimeters * 0.3937" << endl;
	cout << "Your answer is: " << answer << "inches \n" << endl;
}

void inchesToCentimeters()
{
	double num1;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = num1 * 2.54;

	cout << "Your problem was: " << num1 << "inches * 2.54" << endl;
	cout << "Your answer is: " << answer << "centimeters \n" << endl;
}

void inchesToMillimeters()
{
	double num1;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = num1 * 25.4;

	cout << "Your problem was: " << num1 << "inches * 2.54" << endl;
	cout << "Your answer is: " << answer << "millimeters \n" << endl;
}

void millimetersToInches()
{
	double num1;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = num1 * 0.0394;

	cout << "Your problem was: " << num1 << "millimeters  * 0.0394" << endl;
	cout << "Your answer is: " << answer << "inches \n" << endl;
}

void yardsToMeters()
{
	double num1;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = num1 * 0.9144;

	cout << "Your problem was: " << num1 << "yards * 0.9144" << endl;
	cout << "Your answer is: " << answer << "meters \n" << endl;
}

void metersToYards()
{
	double num1;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = num1 * 	1.094;

	cout << "Your problem was: " << num1 << "meters  * 1.094" << endl;
	cout << "Your answer is: " << answer << "yards \n" << endl;
}

void milesToKilometers()
{
	double num1;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = num1 * 1.609;

	cout << "Your problem was: " << num1 << "miles * 1.609" << endl;
	cout << "Your answer is: " << answer << "kilometers \n" << endl;
}

void kilometersToMiles()
{
	double num1;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = num1 * 	0.6214;

	cout << "Your problem was: " << num1 << "kilometers * 0.6214" << endl;
	cout << "Your answer is: " << answer << "miles \n" << endl;
}

void nauticalmilesToKilometers()
{
	double num1;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = num1 * 	1.852;

	cout << "Your problem was: " << num1 << "nm * 1.852" << endl;
	cout << "Your answer is: " << answer << "kilometers \n" << endl;
}

void nauticalmilesToMiles()
{
	double num1;

	cout << "Please enter your first number: " << endl;
	cin >> num1;

	double answer = num1 * 	1.150779;

	cout << "Your problem was: " << num1 << "nm * 1.150779" << endl;
	cout << "Your answer is: " << answer << "miles \n" << endl;
}