//Mark Laskowski
//CS 317, homework 1
//06/03/14
//this program uses bubble sort to sort throught all elements of an array.
//Algorithm repeatidly passes through array (outer loop)
//in each pass comparing elements two at a time (inner loop).
//If a pair of elements is out of order, they get swapped.


#include "stdafx.h"
#include <iostream>
#define size 6

using namespace std;

int main()
{


    //declare program variables
	int progarray[size] = {0};
	int i, j, num, temp;


	//input values into array
	for (i = 0; i < size; i++) {

		//for each element, put that element into the array
		cout << "enter a number please" << endl;
		cin >> num;
		progarray[i] = num;


	}//end for loop



  //sort array using bubblesort
  for (i = 0; i < size; i++) {

	for (j = 0; j < (size - 1); j++) {

		//if elements are out of order, swap
		if (progarray[j] > progarray[j + 1]) {

			temp = progarray[j];
			progarray[j] = progarray[j + 1];
			progarray[j + 1] = temp;
		}//end if

	}//end inner loop

  }//end outer loop


  //print out sorted array to see if sort worked
  for (i = 0; i < size; i++) {
  cout << progarray[i] << "    ";

  }


  return 0;
}
