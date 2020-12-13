#include "11_GameFunctions.h"
#include <iostream>

using namespace std;

//Functions used for the game in the 11th tutorial

//------------------------------------------------------------------------------------------------------------------------------------------------------
// Promts player to set the difficulty of the game and returns difficulty as integer
int setDiff() {
	cout << "Please choose the difficulty by entering a whole number greater than 2." << endl;
	cout << "The higher the number, the more difficult the game will be" << endl;
	int a;
	cin >> a;
	cout << endl << "Now choose a whole number between 0 and " << a << endl;
	return a;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------
// uses lower and upper limit to calculate a new guess (number exactly between limits) and return it
int makeGuess(int lower, int upper) {
	int guess = (upper + lower) / 2;
	return guess;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------
// prints latest guess, prompts user to state if correct and return true or false respectively
bool numberRight(int guess) {
	cout << "Is this your number?: " << guess << endl;
	cout << "yes / no" << endl;
	char a[] = "   ";
	cin >> a;
	char b[] = "yes";
	int result = strcmp(a, b);
	if (result == 0) {
		return true;
	}
	else
		return false;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------
// uses guess as input, prompts user to state if higher and returns true or false respectively
bool higher(int guess) {
	cout << "Is your number higher than " << guess << "?" << endl;
	cout << "yes / no" << endl;
	char a[] = "   ";
	cin >> a;
	char b[] = "yes";
	int result = strcmp(a, b);
	if (result == 0) {
		return true;
	}
	else
		return false;
}