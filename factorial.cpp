
//Mark Laskowski
//CS 317, homework 1
//06/03/14
//this program calculates the factorial of a number n
//recursesively. If n > 1, then factorial(n) = n * factorial(n - 1),
//otherwise function returns 1.

#include "stdafx.h"
#include <iostream>


using namespace std;


//function prototype
int factorial(int number);


int main()
{

//user inputs a number
int num3;

cout << "enter a number:   " << endl;
cin >> num3;


//call recursive function
cout << "the factorial is:   " << factorial(num3);


return 0;
}


int factorial(int number) {

	if (number <= 1) {//base case
		return 1;
	}
	else {
		return number * factorial(number - 1);
	}//ed if statement

}//end of function
