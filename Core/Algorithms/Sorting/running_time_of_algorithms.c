#include <stdio.h>
#include <stdlib.h>

int main(){

	int *arr; // Dynamic array
	int n; // Size of the array
	int i, j; // Incrementers
	int shifts = 0; // Number of shifts
	int storedValue; // Store the ith element in the array for sorting.

	// Read in the size of the array.
	scanf("%d", &n);

	// Dynamically allocate space for the array.
	arr = malloc(n * sizeof(int));

	// Read in every element of the array.
	for(i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}

	// Shift every value over and insert where needed for each element in the array.
	for(i = 1; i < n; i++){

		// Store the current item.
		storedValue = arr[i];
		j = i - 1; // Previous element

		// Search through the array for a place to shift.
		while(j >= 0 && arr[j] > storedValue){
			// Shift the item to the right.
			arr[j + 1] = arr[j];
			j--;
			shifts++;
		}
		// Insert the element into it's new home.
		arr[j + 1] = storedValue;
	}

	// Print the number of shifts the algorithm took to sort the array.
        printf("%d\n", shifts);

	return 0;
}
