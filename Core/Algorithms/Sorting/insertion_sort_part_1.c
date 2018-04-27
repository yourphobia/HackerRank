#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr; // Dynamically sized array
	int n; // Size of the array
	int i, j; // Incrementers
	int storedValue; // Last element of the array

	// Read in the size of the array.
	scanf("%d", &n);

	// Dynamically allocate space for the array.
    arr = malloc(n * sizeof(int));

	// Read in every item of the array.
	for(i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}

	// Store the last element in the array.
	storedValue = arr[n - 1];
    
    // Start incrementing from the last element in the array.
	i = n - 1;
    
    // Shift over elements until there is found a place to insert the stored value.
	while(i >= 0 && arr[i - 1] > storedValue){
        // Shift the array elements over.
		arr[i] = arr[i - 1];
		i--;
        
        // Print every element in the array while the loop runs.
		for(j = 0; j < n; j++){
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
    
    // Insert the storedValue back into the array.
	arr[i] = storedValue;
    
    // Print every element in the array to show the result.
	for(j = 0; j < n; j++){
		printf("%d ", arr[j]);
	}
	printf("\n");

	return 0;
} 
