/* Title: Chapter 2 Exerise 10 - Miles per Gallon - Part A
File Name : Chapter2EX10_Nick_Woolston.cpp
Programmer : Nicholas Woolston
Date : 27 / 09 / 2024
Requirements:
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.

Hint: Use the following formula to calculate miles per gallon (MPG):

MPG = Miles Driven/Gallons of Gas Used
Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so
that the user can enter the number of gallons and the miles driven.
*/
#include <iostream>
using namespace std;
const int totalGallons = 15;
const int totalMiles = 375;
int main()
{
    cout << "A car that can drive 375 miles with 15 gallons of gas gets " << totalMiles / totalGallons << " miles per gallon.\n\n";
    double userGallons;
    cout << "Now try creating a MPG calculation with your own variables.\nFirst start by entering the amount of gallons the vehicle has: ";
    cin >> userGallons;
    cout << endl;
    double userMiles;
    cout << "Now enter the amout of miles the vehicle will traverse: ";
    cin >> userMiles;
    cout << "Your vehicle, which can travel " << userMiles << " miles with " << userGallons << " gallons has a MPG of: " << userMiles / userGallons;

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
