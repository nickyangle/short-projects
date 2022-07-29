#include <iostream>
#include <string>

using namespace std;

// Implement printArray here
void printArray(int temp[100] ,int k) {
	cout << "printing array " << endl;
	for (int i = 0; i < k; i++) {
		std::cout << temp[i] << endl;
	}
	cout << "you entered " << k << " numbers. " << std::endl;
}

// Implement getElement here
// return smallest positive number
int getElement(int temp[100], int k) {
	int smallest = 0;
	int count = 0;
	int var = 0;

	while (var == 0) {
		if (temp[count] >= 0) { 
			smallest = temp[count]; 
			var = 1;
		}
		count++;
		if (count > k) {
			cout << "ERROR: only negative numbers";
			var = 1;
		}
	}

	for (int i = 0; i < k; i++) {
		if (temp[i] < smallest && temp[i] > 0) {
			smallest == temp[i];
		}
	}
	return smallest;
}


// DO NOT CHANGE MAIN FUNCTION BELOW
int main() {
	int myarray[100];
	cout << "Enter number of integers : ";
	int n;
	cin >> n;
	cout << " Enter " << n << " integers: " << endl;
	for (int i = 0; i < n; i++)
		cin >> myarray[i];
	cout << "Contents of array : ";
	printArray(myarray, n);
	cout << "Output of getElement: " << getElement(myarray, n) << endl;
	system("pause"); // comment/uncomment if needed

}
