// Program that sorts an array
#include <iostream>

using namespace std;

// Insertion sort
void insertion_sort(int arr[], int length)
{
    for (int i = 1; i < length; i++) {
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
            int tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
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
	int arr[] = {12, 11, 13, 5, 6};
	int arraySize = sizeof(arr) / sizeof(arr[0]);

	insertion_sort(arr, arraySize);
	printArray(arr, arraySize);

	return 0;
}
