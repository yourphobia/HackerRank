#include <stdio.h>
#include <stdlib.h>

int main(){

	int *arr; // Dynamic array
	int n; // Size of the array
	int i, j; // Incrementers
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
		}
		// Insert the element into it's new home.
		arr[j + 1] = storedValue;
		
		// Print every element of the array after every iteration.
		for(int z = 0; z < n; z++){
			printf("%d ", arr[z]);
		}

		printf("\n");
	}

	return 0;
}
