// Program that sorts an array
#include <iostream>
using namespace std;

void insertion_sort(int arr[], int arraySize) {
	int i; // progress through the full array
	int j; // goes back through the previously reviewed elements
	for (i = 1; i < arraySize; i++) {
		j = i;
		while ( (j > 0) && (arr[j] < arr[j-1])) {
			arr[j + 1] = arr[j];
			j -= 1;
		}
	}
}

// Utility to print out array
void printArray(int arr[], int n) {
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

//Main program
int main () {
	int arr[] = { 12, 11, 13, 5, 6 };
	int arraySize = sizeof(arr) / sizeof(arr[0]);

	insertion_sort(arr, arraySize);
	printArray(arr, arraySize);

	return 0;
}
