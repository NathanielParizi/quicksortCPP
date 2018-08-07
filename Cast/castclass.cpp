/*
 * castclass.cpp
 *
 *  Created on: Aug 6, 2018
 *      Author: Nathaniel Parizi
 */

#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int compare(const void* a, const void* b)     //prototype for comparison needed in the quickSort method
{
	const int* x = (int*) a;
	const int* y = (int*) b;

	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;

	return 0;
}

int main(){

	double num, result, myDouble;
	cout << "Enter a number: " ;
	cin >> num;
	result = sqrt(num);
	cout << "Square root is " << result << endl;


	const int number = 12;
		int arr[number] = {9,4,19,2,7,9,5,15,23,3,7777,543};    //  Running in O(N^2) worst case
													   // Running in NlogN best case
		cout << "Before sorting" << endl;              // Running in NlogN average case
		for (int i=0; i<number; i++)
			cout << arr[i] << " ";

		qsort(arr,number,sizeof(int),compare);
		cout << endl << endl;
		cout << "After sorting" << endl;

		for (int i=0; i<number; i++)
			cout << arr[i] << " " ;


		cout << endl;

		string damn = (arr[11] > 10 ) ? "final val is larger than 10" : "not larger than 10";

		cout << damn << endl;





}
