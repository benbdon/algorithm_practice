/* Function to sort an array using insertion sort*/
#include <cstdio>

using namespace std;

void insertion_sort(int arr[], int elementsOfArray) {
	int i, j; // counters
	for (i = 1; i < elementsOfArray; i++) {
		j = i;
		while ( (j > 0) && (arr[j] < arr[j-1])) { // j > 0 handles the 1 element array case
			arr[j + 1] = arr[j];
			j = j - 1;
		}
	}
}

void printArray(int arr[], int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main () {
	int arr[] = { 12, 11, 13, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertion_sort(arr, n);
	printArray(arr, n);

	return 0;
}
