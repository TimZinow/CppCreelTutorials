//------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------------
//Creel C++ Tutorials
//------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------------
//Taken from :
// Creel - C++ Tutorial for Beginners 1: Introduction and First Program
// (https://www.youtube.com/watch?v=QjiZqdDqKzw&list=PL0C5825724605DB2A&index=1)
//------------------------------------------------------------------------------------------------------------------------------------------------------

//Table of Contents:
/*

* 1_1 - Hello World/Basics
* 1_2 - Functions, cin, cout
* 2 - Test if, else if, else
* 3 - Calculator, If, else, if else, and, or
* 4 - Incrementing and decrementing
* 5 - Control structures (while loops)
* 6 - For Loops
* 7 - Functions
* 8 - Switch Statements
* 9 - Arrays
* 10 - Pointers
* 11/12 - Game Programming/Headers
* 13 - Passing by reference vs by pointer
* 14 - 2D arrays
* 15 - Structures explained (Game Programming)
* 16 - Classes and objects
* 17 - New and delete, the stack and the heap
* 18 - Function overloading
* 19 - 

To run a certain program the "slash star  star slash"-commands have to be removed for the section where they don't surround a comment. 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------



//Tutorial 1_1: Hello world
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>                   //library in-/outstream that is necessary to use cin and cout

using namespace std;                  //namespace that includes cin and cout, otherwise it would be necessary to write std::cin or std::cout every time

int main() {                          //main function without any input which is called first in every program
	cout << "Hello World" << endl;    //The string "Hello World" is passed to cout first and afterwards the endline command is passed. Prints to screen
	cin.get();                        //cin.get() makes the programm pause until any key is pressed
	return 0;                         //At the end a value (if all good usually 0) is returned which can be seen on screen. Can be used as error code
}
*/


//Tutorial 1_2: Functions, cin, cout
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>

using namespace std;

// A function is created that adds two integer numbers a and b and returns their sum
int Summe(int a,int b){
	cout<<"Summe:"<<endl;
	int c=a+b;
	return c;
}

int main(){

//C++ usually ignores white spaces and single line comments can be written like that
/* int main() is the standard main function of every program. Usually 0 is returned, but other numbers can be returned to
 function as error codes in case something is wrong. Semicolons shouldn't be forgotten and end every statement.
 If a variable is declared it's type also has to be declared as for instance int a=5; char b='a'; float c=5.5; string d='Hi there';...*/
 /*Comments that
 span over multiple lines can be written like that*/
/*
cout << "Geben Sie a und b ein." << endl;
cout << "a=" << endl;
int a;
cin >> a;
cout << "b=" << endl;
int b;
cin >> b;
cout << Summe(a, b) << endl;    //Function Summe is called with arguments a and b and their sum is returned
cin.get();                      // waits for input before program closes. Otherwise it closes immediately after the operations are finished
return 0;                       //standard "everything went according to plan"-output

}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 2: Test if, else if, else
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>

using namespace std;

//Data types used most often are int, float, double, char and bool. double has better precision and range than float, bool is true/false

int main(){

	cout<<"Geben Sie eine Zahl im Bereich von 0 bis 10 ein"<<endl;
	int a=0;
	cin>>a;

if (a <= 5) {                                                   //If condition is met, do...
	cout << "a ist nicht groesser als 5";
	cin.get();
	return 0;
}
else if (a == 10) {                                             //If first condition is not met, but this condition is met, do
	cout << "a ist maximal gross";
	cin.get();
	return 0;
}
else {                                                          //If conditions above are not met, do
	cout << "a ist groesser als 5 aber nicht maximal gross";
	cin.get();
	return 0;
}
}

//Conditional operators described in next tut
//Variable names should be chosen properly to increase programming speed and establish a certain order within the code
//primeCounter could for instance be used to count primes within a loop over a certain range
//Remember that p=19; p=p-9; works and sets p to 10
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 3: Calculator, If, else, if else, and, or
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>

using namespace std;

// Example coded in tutorial 3 (if, else if, else, &&, ||, Conditional Operators)
// Cute little calculator

int main(){
	int a, b, option;                  //Several variables can be declared in the same line
	cout<<"Give us a number?"<<endl;
	cin>>a;
	cout<<"And another?"<<endl;
	cin>>b;
	cout<<"Select an option:"<<endl;
	cout<<"1: Add"<<endl;
	cout<<"2: Subtract"<<endl;
	cout<<"3: Multiply"<<endl;
	cout<<"4: Divide"<<endl;
	cin>>option;

	if(option==1){
		int c=a+b;                     //This can also be written in one line without declaring c, but I don't like it
		cout<<a<<"+"<<b<<"="<<c<<endl;
	}
	else if(option==2){
		int c=a-b;
		cout<<a<<"-"<<b<<"="<<c<<endl;
	}
	else if(option==3){
		int c=a*b;
		cout<<a<<"x"<<b<<"="<<c<<endl;
	}
	else if(option==4){
		if(b==0){                      //Dividing by zero is not good practice
			cout<<"Sausage"<<endl;
		}
		else{
		double c=double(a)/double(b);  //a and b have to be converted to double or for instance 7/8=0
		cout<<a<<"/"<<b<<"="<<c<<endl;
		}
	}
	else{
		cout<<"That wasn't an option you moron!"<<endl;
	}

	cin.get();                        //Acts like the break point in his tutorial. Program ends as soon as another key is pressed
	return 0;
}


/*
Conditional Operators:
== is equal to         NOT to be confused with assignment operator =
!= is not equal to
< less than
> greater than
<= less or equal
>= greater or equal
&& and
|| or


if(){                  This is the normal order of if, else if, else but if statements can also be nested
}                      which means an if statement can be written in the code block of another if statement
else if(){
}
else{
}

0 is False
everything else is seen as True
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 4: Incrementing and decrementing
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>

using namespace std;

/*
There is suffix incrementing and prefix incrementing, increment after assignment
var++ Suffix increment
example:
var=0;
int j=var++    //j will be 0 and var will be 1

++var Prefix increment
example:
var=0;
int j=++var    //j and var will both be 1, increment before assignment

Same for decrementing with var-- or --var

int a,b,c; //Short way to create variables of the same type
a=b=c=0;   //Short way to assign the same value to multiple variables

a=a+1 is called a compound assignment. The value of a is set as well as changed
There are shortcuts to write such assignments:
a=a+1  a+=1 increment
a=a-1  a-=1 decrement
a=a*2  a*=2
a=a/2  a/=2
a=a%2  a%=2

Two compound assignments can actually be used in one line. Not sure if helpful
Example:
a=5;
b=7;
b*=a-=2; //<=> b=(a-2)*b   read compound assignment from right to left (as values are assigned) to get alternative form

*/
/*
int main() {

	cout << "This tutorial was informative, but no programming was necessary..." << endl;
	cout << "Give me a number though: " << endl;
	int a;
	cin >> a;
	cout << "Oh yes, a number! I've always wanted one of these!" << endl;
	cout << "It's far too generous though. I'll pass it back to you. I might just keep a little bit..." << endl;
	cout << "Here you go. Almost like it was given: " << --a << endl;  //If a-- is used the same value is given as output, for --a it's a-1

	cin.get();
	return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 5: Control structures
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>
#include <cmath>         //Necessary for math functions such as sqrt() or pi

using namespace std;

/*
While loop: //Condition is always checked before the loop is executed. If false it's never executed
while(condition){
do something;
}

Do while loop: //This loop is similar but since the condition is checked afterwards it's always executed at least once
do{
something
}while(condition);

break; immediately ends the loop (Could be used in combination with a counter to make sure there are no infinite loops


*/
/*
int main() { //Task from tutorial: cout the first 6 powers of 7, tasks 1-100 and 45 to 0 in steps of 5 done before
	int a = 1;
	do {
		cout << "7^" << a << "=" << pow(7, a++) << endl;  //pow(a,b) returns a^b
		//a+=1;                                           //Can be done by increment directly in cout line, does not work for steps of 5
	} while (a <= 6);

	cin.get();
	return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 6: For loops
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>
#include <cmath>

using namespace std;

/*

Syntax is:

for(initializer; condition; increment/decrement){
CODE BLOCK
}

initializer is used once at the beginning of the loop e.g. int i=0
condition is checked each time before the loop is executed e.g. i<a
increment/decrement changes the value in the condition e.g. i++ or i--

continue; skips the rest of the body of a for loop once

infinite loops (condition=true) can be useful if they are used in combination with a break command in a condition
*/

/*
int Summe_it(int a) {                //iterative version (loop, many iterations of a code block) 
	int summe = 0;
	for (int i = 1; i <= a; i++) {   //it's possible to put several initializers, conditions and increments in a for-loop
		summe += i;                  //as e.g. for(int i=1, j=2; i<100, j<101;i++, j++){} although usually the loops are nested   
	}                                //The loop breaks as soon as any of the conditions is false
	return summe;
}

int Summe_re(int a) {                //recursive version, apparently it does not work for large numbers (e.g. 10^6) (function calls itself)
	if (a > 0) {
		return a + Summe_re(a - 1);
	}
}

void displSum() {                    //void can be used if a function does not return a value
	cout << "Please enter a whole number: " << endl;
	int a;
	cin >> a;
	cout << "The sum of all numbers from 1 to " << a << " is " << Summe_it(a) << endl;
}


int main() {
	int option = -1;
	while (true) {                   //Example of an infinite loop with a break statement. Very useful. for(;;){} also works
		cout << "1. New sum" << endl;
		cout << "0. Exit" << endl << endl;
		cin >> option;
		if (option == 0) {
			cout << "Exit program" << endl;
			break;
		}
		else if (option == 1) {
			cout << "New sum" << endl << endl;
			displSum();
			cout << endl;
		}
	}
	*/
	/*
	  //Challenge 1: cout the word cabbage 1000 times
	for(int i=0;i<1000;i++){
		cout<<i+1<<": cabbage  ";
	}
	*/

	/*  //Challenge 2: Say the alphabet using char and 'A' and 'Z'
	char A='A'; //assigns the char A to the variable A
	char Z='Z';
	int a=int(A); //assigns ascii value of A to variable a. Every character has an ascii value (integer number)
	int z=int(Z);
	for(int i=a;i<=z;i++){
		cout<<char(i)<<endl;
	}*/

	/*
	//and the short version from the tutorial: another example of elegant and effective programming
	for(char c='A';c<='Z';c++)
	cout<<c<<endl;
	*/


	/*  //Challenge 3: Print out numbers from 50 to 100 that aren't divisible by 3
	for(int i=50;i<=100;i++){
		if(i%3==0){                                                                   //could also have chosen if(i%3!=0)cout<<i<<endl;
			continue; //continue can be used to skip the rest of the loop's body once
		}
		else cout<<i<<endl;
	}
	*/
	/*
	return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 7: Functions
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>
#include <cmath>

using namespace std;

// procedures don't return a value, just a bunch of steps
// functions do return a value

/*
Functions are usually defined above the main function

Syntax:
returnVarType function_name(varType Variable 1, varType Variable 2, ...){
	function body
}

if nothing shall be returned the returnVarType void has to be used

Variables defined in a function are not defined within main and vice versa

There's a difference between a function's declaration and definition:
Example:
float SumOneToX(float);
is a function declaration. After the function has been declared it can be used even before it is defined below

There are many functions that are either directly included in C++ or have to be included with the #include <HeaderName> command
If functions written by other people are used it should be marked with source in the code
*/
/*
int Differenz(int, int); //Function declaration (Important for headers)

int DiffProd(int a, int b) { //Function definition
	return Differenz(a, b) * b; //This only works because Differenz has been declared above
}

int Differenz(int a, int b) { //Function definition, can be below point of use since it has been declared above point of use
	return a - b;
}

int Summe(int a, int b) {
	return a + b;
}

int GetMax(int a, int b, int c) {
	int max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	return max;
}

int Fakultaet() {
	int Produkt = 1;
	for (int i = 1; i <= GetMax(7, 5, 8); i++) { //A function call can be used in place of a variable in a looping structure
		Produkt *= i;
	}
	return Produkt;
}

int main() {
	cout << DiffProd(5, 4) << endl;
	cout << Summe(Differenz(9, 7), 5) << endl; //Function calls can be used as parameters for other function calls.
	cout << Fakultaet() << endl;
	return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 8: Switch Statements
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>
#include <cmath>

using namespace std;

void NewFile(){
	cout<<"New File will be created"<<endl;
}

void OpenFile(){
	cout<<"File will be opened"<<endl;
}

void SaveFile(){
	cout<<"File will be saved"<<endl;
}

/*
A switch block can be used instead of several if, if else, if else, ... statements as long as the same variable is compared
within the condition. This is particularly useful for menus or for actions in games.

if after a case statement nothing else is written the case underneath will be executed also in both cases

int j=1;
switch(j){
case 0:
case 1:
case 2: cout<<"j is 0,1 or 2"<<endl; break;
default: cout<<"It's something else"<<endl;
}
*/
/*
int main() {
	int UserOption = -1;
	while (UserOption != 0) {
		cout << "Main Menu:" << endl;
		cout << "1. New File" << endl;
		cout << "2. Open File" << endl;
		cout << "3. Save File" << endl;
		cout << "0. Exit" << endl;

		cin >> UserOption;

		switch (UserOption) {                                   //The variable UserOption is compared with the different cases
		case 0:cout << "exit program" << endl; break;           //if a break is left out the other options will be checked as well
		case 1:NewFile(); break;                                //which would not be possible using if/else if/else statements
		case 2:OpenFile(); break;                               //These are breaks from the switch function, not the while loop
		case 3:SaveFile(); break;                               //if a break is left out the variable value can also be changed
		default: cout << "That's not a valid option." << endl;  //to make sure the next case is also true. Otherwise default is 
		}                                                       //executed as well
	}
	return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 9: Arrays
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>
#include <cmath>

using namespace std;

/*
array = list of same variable type over and over again

Syntax:
DataType Name[NumberOfItems];

if arrays are to be returned by a function pointers have to be used. This can be seen in program splitwise attempt or here:
https://stackoverflow.com/questions/7527356/return-string-array-in-c-function

*/
/*
int main() {
	int Array[5];                                 //declaration of int array Array with 5 values from Array[0] to Array[4]
	Array[0] = 1;                                 //assigning values to Array entries
	Array[1] = 2;
	Array[2] = 3;
	Array[3] = 4;
	Array[4] = 5;
	cout << Array[3] << endl;

	fill(Array, Array + sizeof(Array) - 1, 0);    //std::fill makes it possible to replace all values within an array with the same value
	cout << Array[4] << endl;                     //sizeof(Array) returns the number of variables within the array (5)


	int Array2[4] = { 1,2,3,4 };                  //Shorter way to declare an array and assign values
	cout << Array2[3] << endl;

	int Array3[10] = { 0 };                       //Short way to declare array filled with zeros
	cout << Array3[4] << endl;

	// Declare a little string that says "Hi!" the long way
	char cStr1[4] = { 'H','i','!','0' };          //You can also use '/0'

	//Same string only the short hand, remember there's an invisible 0
	char cSrt2[4] = "Hi!";

	//Declare an array with 3 elements with [], C++ will count the items
	int someArr[] = { 9,4,3 };

	//Declare array but don't set the elements to anything
	float fArray[5];                              // Remember to set them before using them!

	return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 10: Pointers
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>
#include <cmath>

using namespace std;

/*
Each variable has a name, a value and an address in RAM. A pointer points to the address in RAM

'A pointer is a variable that holds the address of another variable rather than it's value.'

The type of a pointer is the same type as the type of the variable it's pointing to

Pointers are useful in linked lists, which consist of variable/pointer pairs (the pointer points to the next variable in the list)


*/
/*
int main() {
	int* p;                                                    //declaration of pointer p which points to a variable of type int
	int a = 5;
	p = &a;                                                    //the address of variable a is assigned to the pointer p
	cout << "a=" << a << endl << "adress of a:" << p << endl;
	*p = 7;                                                    //the variable that the pointer p points to is changed, 
	cout << "a=" << a << endl;                                 //the star in this case is different from the one in the declaration
	return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 11: Game Programming / Tutorial 12: Headers
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>
#include <cmath>
#include "11_GameFunctions.h" //Used to include the functions defined in 11_GameFunctions.cpp into the main program

using namespace std;

/*
Basic Game Loop:
1.) Get input from the player
2.) Update the world (Enemy AI, Physics, etc.)
3.) Draw Graphics
4.) Repeat till they quit

usually in this order in every game, but order can also be changed

If a variable is defined outside of any function (including int main()) it is a global variable and every function can use it
*/

/*
int main() {
	int upper = setDiff();
	int lower = 0;
	while (true) {
		if (numberRight(makeGuess(lower, upper))) {
			cout << endl << "Yey!!!" << endl;
			break;
		}
		else {
			if (higher(makeGuess(lower, upper))) {
				lower = makeGuess(lower, upper);
			}
			else {
				upper = makeGuess(lower, upper);
			}
		}
	}
	cin.get();
	return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 13: Passing by reference vs. by pointer
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>
#include <cmath>

using namespace std;

/*
Ususally a function does not alter the value that is passed to it, but just alters a copy of said value

If a pointer is passed to the function the value at the address the pointer points to can be changed

If a variable is passed by reference the same thing can be done but without any further need for * and & signs
Moreover several variables can be passed by reference resulting in several variables being 'returned' from the function

The methods are almost interchangeable, but not exactly. Both have the advantages and disadvantages
*/
/*
//Pass by pointer
void addTwentyfive(int* var) {                     //Pointer to address of variable is given to function
	*var += 25;                                    //The value of the variable stored at address is increased by 25
}

void addTwentyfour(int& var) {                     //& sign does not mean address of, but passing by reference.
	var += 24;                                     //Does basically the same thing as passing by pointer, but no further stars or ampersands needed
}

int main() {
	int a = 5;                                     //integer is created
	addTwentyfive(&a);                             //address of a is passed to function and thus value of a is increased
	cout << "The new value of a is " << a << endl; //The new value 30 is used as output
	int b = 6;
	addTwentyfour(b);                              //Since the variable is passed by reference it can be passed directly. Makes things easier
	cout << "The new value of b is " << b << endl;
	return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 14: 2D Arrays
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>
#include <cmath>

using namespace std;

/*
Iteration through 2D arrays possible by nesting 2 for loops
*/
/*
int main() {
	int twoDArray[3][2] = {                        //Declare 3x2 2D array and set values
	{1,2},
	{3,4},
	{5,6}
	};

	cout << "1: " << twoDArray[1][1] << endl;      //Since array starts at zero the value is 4

	int some2DArray[10][5] = { {0} };              //Declare 2D array all elements to zero, works the same for nD array but number of braces has to be n
	cout << "2: " << some2DArray[1][1] << endl;    // For other value than zero the fill option has to be used (see Tutorial 9: Arrays)

	float someArray[][3] = {                       //You can leave out the first dimension
	{1,2,3},
	{4,5,6}
	};
	cout << "3: " << someArray[1][1] << endl;

	int ArrayTest[4][3];                           //Array declaration
	for (int i = 0; i < 4; i++) {                  //Iteration over 2D array for assigning values
		for (int j = 0; j < 3; j++) {
			ArrayTest[i][j] = 0;
		}
	}
	cout << "4: " << ArrayTest[1][1] << endl;


	return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 15: Structures explained (Game Programming)
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>      //Standard in out stream e.g. for cout, cin

#include <cmath>         //cmath for all math functions as e.g. squareroot or pi (not used here)

#include <ctime>         //ctime for reading the time from the motherboard
#include <stdlib.h>      //stdlib.h for the random funtion that uses the time to seed a random number

#include <conio.h>       //for the _getch() function that keeps the screen from closing, not sure why not cin.get()


using namespace std;

/*

Structures can be defined and are basically a new type of object. A structure can contain several variables and also functions.

The structure has to be defined with the syntax:
struct structureName {
// Data members
VarType Var1;
VarType Var2;

//Member functions
void PrintSth(){
cout<<"Sth"<<endl;
}

}

After the structure has been declared an object of that structure can be defined and the variables can be set. If a variable should be set to the same
value for each object of that structure the value can already be set within the structure declaration. In that case it makes sense to set add "static"
before the type of the variable to make sure the variable is only stored once and not copied to all objects of the structure.

structureName object;
object.Var1=1;
object.Var2=2;
object.PrintSth();

To access variables of functions of the structure the .-syntax has to be used

*/
/*
struct Map_Tile {           //Definition of a structure called Map Tile
	char TileCharacter;     //Definition of a char called TileCharacter that every object of type Map_Tile has
	bool walkable;          //Definition of a bool called walkable that every object of type Map_Tile has
};

struct Point {              //Definition of structure called Point (Basically 2D vector)
	int x, y;               //Holds two integer variables x and y
}PlayerPos;                 //directly after the curly braces an object of the structure can be defined, in this case called PlayerPos

int const mapheight = 10;   //const just means that the value can not be changed in main, it's constant
int const mapwidth = 10;

Map_Tile Map[mapheight][mapwidth];           //Creation of an array called Map of 10 times 10 Map_Tile objects

void GenerateMap() {
	srand(time(NULL));                       //Seeding a random number from the current time on the motherboard (Long integer)
	for (int x = 0; x < mapheight; x++) {    //Loop over all Map_Tile objects in Map
		for (int y = 0; y < mapwidth; y++) {
			int t = rand() % 2;              //After random was seeded from time it is now called without arguments and returns a pseudorandom number 
			                                 //from zero to max int
			                                 //Modulus 2 of the number returns either 1 or 0 depending on the evenness of the pseudorandom number
			if (t == 0) {
				Map[x][y].TileCharacter = '#';
				Map[x][y].walkable = false;
			}
			else {
				Map[x][y].TileCharacter = '.';
				Map[x][y].walkable = true;
			}
		}
	}
	Map[0][0].TileCharacter = '.';
	Map[0][0].walkable = true;
}

void PrintMap() {
	for (int y = 0; y < mapheight; y++) {                 //Printing array using nested for loops
		for (int x = 0; x < mapwidth; x++) {
			if (x == PlayerPos.x && y == PlayerPos.y) {
				cout << "@";                              //Using the @ symbol to show the position of the player
			}
			else {
				cout << Map[x][y].TileCharacter;          //Printing each tile's TileCharacter
			}
		}
		cout << endl;                                     //breaking line after each row
	}
}

void PrintWalkable() {
	for (int y = 0; y < mapheight; y++) {                 //Printing array using nested for loops
		for (int x = 0; x < mapwidth; x++) {
			if (x == PlayerPos.x && y == PlayerPos.y) {
				cout << "@";                              //Using the @ symbol to show the position of the player
			}
			else {
				cout << Map[x][y].walkable;               //Printing each tile's TileCharacter
			}
		}
		cout << endl;                                     //breaking line after each row
	}
}

int main() {


	PlayerPos.x = 0;
	PlayerPos.y = 0;
	GenerateMap();                                       //function generates map
	PrintWalkable();

	char option = 'n';
	cout << "Controls:" << endl;
	cout << "W: up" << endl << "S: down" << endl << "A: left" << endl << "D: right" << endl;
	cout << "Q to quit" << endl << endl;

	while (true) {
		PrintMap();                                      //function prints map
		cout << ">";
		cin >> option;

		if (option == 'w' && PlayerPos.y > 0 && Map[PlayerPos.x][PlayerPos.y - 1].walkable) {   //option up, not all the way up and field above walkable
			PlayerPos.y--;                                                                      //move PlayerPos one up (increase of y downwards, thus decrease 
			                                                                                    //==> upwards)
		}
		else if (option == 's' && PlayerPos.y < (mapheight - 1) && Map[PlayerPos.x][PlayerPos.y + 1].walkable) {    //down, not down yet, walkable
			PlayerPos.y++;
		}
		else if (option == 'a' && PlayerPos.x > 0 && Map[PlayerPos.x - 1][PlayerPos.y].walkable) {                  //left, not left yet, walkable
			PlayerPos.x--; //increase of x to the right, thus decrease ==> left
		}
		else if (option == 'd' && PlayerPos.x < (mapwidth - 1) && Map[PlayerPos.x + 1][PlayerPos.y].walkable) {     //right, not right yet, walkable
			PlayerPos.x++;
		}
		else if (option == 'q') {
			break;
		}
		else {
			cout << "That's a wall or you pressed the wrong key!" << endl;
		}
	}






	//_getch();          //function keeps the screen from closing

	return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 16: Classes and objects
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include<iostream>
#include<cmath>

#include <ctime>                  //ctime for reading the time from the motherboard
#include <stdlib.h>               //stdlib.h for the random funtion that uses the time to seed a random number

#include <chrono>                 //For creating short pauses in a loop, See commented block of code in main()
#include <thread>                 //                                    "


using namespace std;

/*
A class is very similar to a structure, the only difference is that in a structure the default mode for the members is public, while for a class
it's private. Members or functions that are private can only be accessed by the class methods.
This is done to encapsulate certain processes and thus reduce the risk of making mistakes.
Members of a class can be the usual data types but also structures and other classes.
It is common to declare member methods within the class definition, but define them outside of the class definition, maybe even in another file.
If a member function is defined within the class definition that means something else (in-lining it; explained later)

Syntax of a class:

class ClassName{
private:
//insert private members and functions
public:
//insert public members and functions
};

To define a method (function of a class) outside of the class definition (as it is usually done) the :: syntax has to be used as can be seen in the example
below.

After a class and its member functions and variables have been defined the class can be used to create and instance/object of the class.
The public members can then be accessed with the .-syntax like it is done for structures.

*/

//With right click to the left of a line of code -> Breakpoint -> Add breakpoint a breakpoint can be added for debugging or for checking values
//(Mit Rechtsklick links neben eine Codezeile -> Haltepunkt -> Haltepunkt einfügen lassen sich zum Debuggen oder Werte überprüfen Haltepunkte einfügen)
//there's a small gear symbol that appears when the cursor is placed over the red breakpoint and conditions for breaking can be added here
/*
class Bird {
private:
	int height;
	void FlapWings();
public:
	void Fly();
	void Reset();
};                             //Semicolon for class definition
/*
void Bird::FlapWings() {
	srand(time(NULL));         //Seeding a random number from the current time on the motherboard (Long integer)
	height += rand() % 100;    //height is private and thus can only be changed by a function within the class
}                              //No semicolon for function definitions

void Bird::Reset() {
	height = 0;
}

void Bird::Fly() {
	FlapWings();               //FlapWings is private, but can be called by the class function Fly which is public
	cout << height << endl;    //Could be commented, but it's nice to see some result on the screen
}


int main() {

	/* //This block can be used to create a short break in a program. But actually it makes sense that all birds are flying at the same height
	using namespace std::this_thread;   // sleep_for, sleep_until
	using namespace std::chrono;        // nanoseconds, system_clock, seconds

	sleep_for(nanoseconds(10));
	sleep_until(system_clock::now() + seconds(1));
	*/
	/*
	Bird Sparrow;

	Sparrow.Reset();

	Sparrow.Fly();

	Bird FlockOfSparrows[1024];

	for (int i = 0; i < 1024; i++) {
		FlockOfSparrows[i].Reset();
		//sleep_for(milliseconds(100)); //To make sure it's not all the same rand value
		FlockOfSparrows[i].Fly();
	}

	return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 17: new and delete, the stack and the heap
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include<iostream>
#include<cmath>

using namespace std;

/*

STACK:
If a function is called the position of the next executable line of code after the function call is stored in the so-calles stack part of the RAM.
The stack is filled from the bottom to the top and the variables defined within a function are also stored in the stack. After the function
is done the stack is emptied from top to bottom, so in reverse order and the values are returned. The stack is limited to several MB and
the necessary space can exceed the available space for complicated calculations with many function calls (e.g. for extensive recursive functions)

HEAP:
Each program running on a PC is assigned a certain part of the RAM fitting its needs. If the stack is not big enough or the variables that are used
within a function should not be deleted after the function call a certain part of the total ram (the heap) can be assigned to this process.
It is of utmost importance to delete it after it is finished. Otherwise the program uses more and more of the RAM with each call until the PC crashes.
It's also important to make sure that no other part of the RAM is deleted if e.g. the bounds of an array are crossed.
If variables/arrays on the heap are created but not deleted it results in a so called memory leak that may crash the PC.
*/
/*
int main() {

	//Creating a single variable on the heap
	int* i = new int;                     //Create an int on the heap
	//Do what you've gotta:
	*i = 190;
	cout << "i is set to " << *i << endl;
	delete i;                             //Return the int to the heap. Very important. Always delete RAM that you've allocated from the heap

	//Creating an array on the heap
	int* j = new int[57];                 //pointer to the start of the array on the heap. Array from *j[0] to *j[56]. 
	                                      //Don't read or write outside of bounds!
	//Do what you've gotta:
	j[7] = 78;
	j[53] = j[7] + 78;
	//Return the whole array to the heap
	delete[] j;                           //Delete[] means that *i is pointing to an array! Brackets are important!!

	return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 18: Function overloading
//------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include<iostream>
#include<cmath>

using namespace std;

/*
There can be more than one function of the same name within a C++ program as long as the functions have different parameter types as input.
The names of the input variables make no difference, only their type is of importance.
A difference in the return type is not sufficient to distinguish between the functions, if they have the same parameter types as input
The number of variables (even of the same type) can also be enough to distinguish between functions
If variables of a different type are passed to a function they are converted and used as input. This is called casting. This only works if there
aren't two functions of the same name with different types to the one passed. In this case there would be two equally likely casting options.
*/
/*
int Add(int a, int b) {
	int c = a + b;
	cout << endl << "Two integers added" << endl;
	return c;
}

float Add(float a, float b) {
	float c = a + b;
	cout << endl << "Two floats added" << endl;
	return c;
}

int Add(int a, int b, int c) {
	int d = a + b + c;
	cout << endl << "Three integers added" << endl;
	return d;
}

int main() {
	cout << Add(4, 5);
	float a = 4.2;
	float b = 5.3;
	cout << Add(4.2f, 5.3f);             //It only works with the f's, otherwise it would also work with int Add (casting) and be ambiguous
	cout << Add(a, b);                   //works, because type float was specifically declared
	cout << Add(4, 5, 6);
	double e = 5.6;
	double f = 6.4;
	cout << Add((float)e, (float)f);     //This only works if the (float) or (int) is added. Otherwise there would be two casting options
	return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 19: Constructors and Destructors 
//------------------------------------------------------------------------------------------------------------------------------------------------------

/*
If a class object is initialized first the constructor of the class is called. If no constructor is specified C++ automatically uses the default constructor
If a variable is created on the heap the destructor is not called outomatically as soon as it falls out of scope. It has to be called by the delete method to reallocate the space on the RAM
RAM = random access memory
If a class function is defined within the class declaration it is called inlining the function. This can be useful if the function body is short
*/

#include<iostream>
#include<cmath>
#include <ctime>                  //ctime for reading the time from the motherboard
#define _CRTDBG_MAP_ALLOC         //Used for checking for memory leaks
#include <stdlib.h>               //stdlib.h for the random funtion that uses the time to seed a random number and for checking for memory leaks
#include <crtdbg.h>               //Used for checking for memory leaks

using namespace std;


int getRand(int max) {            //Function to produce a random number between 0 and max based on the PC time
	srand(time(NULL));
	return rand() % (max + 1);
}


class Bird {
public:
	Bird();               //Declaration of constructor
	Bird(int a);          //Constructors can be overloaded same as other functions
	Bird(float b);        //This can be used to intitialize class objects depending on the parameters passed to the constructor
	~Bird();
};

Bird::Bird() {
	//Empty constructor definition (This is equivalent to the default constructor that is automatically called if no other constructor is defined) 
}

Bird::Bird(int a) {
	//Empty constructor definition but this time an integer value is passed
}

Bird::Bird(float b) {
	//Empty constructor definition but this time a float value is passed
}

Bird::~Bird() {
	//cout << "Destructor is called" << endl;                                           //Destructor (usually empty), reallocates RAM space if object is destroyed or falls out of scope 
																						//(e.g. created within function but not returned)
	//cerr << "Destructor called for " << __FUNCTION__ << " at " << &(*this) << endl;   //Displays object name and RAM location of destroyed object
}


class Person {            //person class for first challenge (12:20)
public:
	Person();
	Person(int, float, float);
	~Person();
	int dispAge();
	float dispH();        //can't write float dishh(), dispw(); because these aren't variables but function declarations
	float dispW();
private:
	int age;
	float height, weight; //here the variable declarations can be written in one line
};

Person::Person() {

}

Person::Person(int a, float h, float w) { //constructor for person class (challenge 1), could also assigne random values directly here, but this way i can also pass concrete values
	Person::age = a;
	Person::height = h;
	Person::weight = w;
}

Person::~Person() {
	//cerr << "destructor called for " << __function__ << " at " << &(*this) << endl;
}

// member functions of person class for displaying the private variables age, height and weight
int Person::dispAge() { 
	return Person::age;
}
float Person::dispH() {
	return Person::height;
}
float Person::dispW() {
	return Person::weight;
}


int main() {
	//This part is used for the first part of the tutorial up to the challenges
	Bird c;                   //This will initialize an object of the class Bird called c using the default constructor, since no argument was passed
	Bird d(100);              //This will initialize an object of the class Bird called d using the constructor that takes an integer value as argument
	Bird e(5.5f);             //This will initialize an object of the class Bird called e using the constructor that takes a float value as argument. Float has to be specified using the f

	//Often the new command is used to create class objects on the heap. As always in this case it is very important to delete the objects afterwards to deallocate the part of the RAM
	Bird* birds = new Bird[100];  //An array of birds is created on the heap and the constructor for each of these objects is called
	delete[] birds;               //Since birds is an array the [] after delete are necessary


	//This part is used for challenge 1 (Create a person class with int age, float height and float weight)
	Person Tim(27, 1.86, 78.0);
	cout << "Tim is " << Tim.dispAge() << " years old." << endl;    //It's important to use "" for strings and '' for single chars in C++. Different than in python
	cout << "Tim is " << Tim.dispH() << " meters tall." << endl;
	cout << "Tim weighs " << Tim.dispW() << " kilos." << endl << endl;

	Person Rando(14+getRand(70), 1.5 + float(getRand(5) / 10.0), float(50+getRand(50)));  //Here random values are passed to define age, height and weight
	cout << "Rando is " << Rando.dispAge() << " years old." << endl; 
	cout << "Rando is " << Rando.dispH() << " meters tall." << endl;
	cout << "Rando weighs " << Rando.dispW() << " kilos." << endl << endl;

	//Challenges 2 (Create House class with Persons) and 3 (Create Town class with Houses) are left out, since the House class somehow caused memory leaks

	_CrtDumpMemoryLeaks(); //Checking for memory leaks

	return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------


//Tutorial 20: 
//------------------------------------------------------------------------------------------------------------------------------------------------------



//------------------------------------------------------------------------------------------------------------------------------------------------------