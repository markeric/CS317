
//Mark Laskowski
//CS 317, homework 1
//06/03/14
//this program uses recursion to calculate the nth fibonacci number..
//if n > 2, then the nth fibonacci number is the sum
// of the (n - 1)th and (n - 2)th fibonacci numbers. Otherwise, 
//it is 1.

#include "stdafx.h"
#include <iostream>

using namespace std;

int fibonacci(int number);//prototype of fibonacci recursive function


int main()
{

//user inputs a number
int num2;

cout << "give me the position n of the element you want to get in a fibonacci sequence   " << endl;
cin >> num2;


//call recursive function
cout << "the nth fibonacci is:   " << fibonacci(num2);


return 0;
}

int fibonacci(int number) {

	if (number <= 2) {//base case
		return 1;
	}
	else {
		return (fibonacci(number - 1) + fibonacci(number - 2));
	}


}//end the function...


