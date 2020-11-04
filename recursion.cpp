//This program demonstrates several types of recursive functions
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


/*
Routine that prints contents of array of strings
*/
void printarray(int array[], int count) {
	int i;
	for (i = 0; i < count - 1; i++) {
		cout << array[i] << ", ";
	}
	cout << array[i];
	cout << endl;
}

// counts how many positive numbers are in the array
int countPositive(int *array, int first, int last) {
	if (first > last) {
		return 0; 
	}
	
	/*if (array[first] == 0) {
		std::cout << "The number 0 was found.";
		return 0 + countPositive(array, first + 1, last);
	}*/

	if (array[first] <= 0) {
		return 0 + countPositive(array, first + 1, last);
	}
	else {
		return 1 + countPositive(array, first + 1, last);
	}
	
}

int countNegative(int *array, int first, int last) {
	if (first > last) {
		return 0;
	}

	/*if (array[first] == 0) {
		std::cout << "The number 0 was found.";
		return 0 + countPositive(array, first + 1, last);
	}*/

	if (array[first] >= 0) {
		return 0 + countPositive(array, first + 1, last);
	}
	else {
		return 1 + countPositive(array, first + 1, last);
	}

}

//count the number of values 1-10
int countRange(int *array, int first, int last) {
	if (first > last) {
		return 0;
	}

	/*if (array[first] == 0) {
		std::cout << "The number 0 was found.";
		return 0 + countPositive(array, first + 1, last);
	}*/

	if (array[first] >=1 && array[first] <= 10) {
		return 1 + countRange(array, first + 1, last);
	}
	else {
		return 0 + countRange(array, first + 1, last);
	}
}

int getMaximum(int *array, int first, int last) {
	if (first > last) {
		return 0;
	}
	if (array[first] == array[last]) {
		return array[first];
	}
	if (array[first] < array[last]) {
		return (getMaximum(array, first + 1, last));
	}
	else {
		return (getMaximum(array, first, last - 1));
	}
}

int getMinimum(int *array, int first, int last) {

	if (first > last) {
		return 0;
	}
	if (array[first] == array[last]) {
		return array[first];
	}
	if (array[first] > array[last]) {
		return (getMinimum(array, first + 1, last));
	}
	else {
		return (getMinimum(array, first, last - 1));
	}

}

int getSum(int *array, int first, int last) {
	if (first > last) {
		return 0;
	}
	if (first == last) {
		return array[first];
	}
	return (array[first] + getSum(array, first + 1, last));
}

int getProduct(int *array, int first, int last) {
	if (first > last) {
		return 0;
	}
	if (first == last) {
		return array[first];
	}
	return (array[first] * getProduct(array, first + 1, last));
}


#define SIZE_OF_ARRAY 12
int main()
{
	int test_array[SIZE_OF_ARRAY] = { 5,1,-1,1,24,1,-1,1,1,1,-10,29 };
	int prod_array[SIZE_OF_ARRAY] = { 5,1,-1,1,20,1,1,1,1,1,-1,10 };


	// print opening meessage

	cout << endl << "Array to be used contains:" << endl;

	printarray(test_array, SIZE_OF_ARRAY);

	cout << "Result of countPositive: " << countPositive(test_array, 0, SIZE_OF_ARRAY-1) << endl;
	cout << "Result of countNegative: " << countNegative(test_array, 0, SIZE_OF_ARRAY - 1) << endl;
	cout << "Result of getMaximum: " << getMaximum(test_array, 0, SIZE_OF_ARRAY-1) << endl;
	cout << "Result of getMinimum: " << getMinimum(test_array, 0, SIZE_OF_ARRAY - 1) << endl;
	cout << "Result of countRange: " << countRange(test_array, 0, SIZE_OF_ARRAY-1) << endl;
	cout << "Result of getSum: " << getSum(test_array, 0, SIZE_OF_ARRAY - 1) << endl;
	cout << "Result of getProduct: " << getProduct(test_array, 0, SIZE_OF_ARRAY - 1) << endl;


	system("pause");
}
