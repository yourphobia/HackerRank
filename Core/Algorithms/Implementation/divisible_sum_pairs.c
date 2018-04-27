#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr; // Dynamic Array
	int n, k; // Array length and positive divisor.
	int i, j; // Incrementers
	int validPairs = 0;

	// Read in size of the array and the divisor.
	scanf("%d %d", &n, &k);

	// Dynamically allocate space for the array.
	arr = malloc(n * sizeof(int));
	
	// Read in all elements of the array
	for(i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}
	
	// Increment i in (i, j).
	for(i = 0; i < n; i++){
		// Increment j in (i, j).
		for(j = i + 1; j < n; j++){
			// If a0 + a1 is divisible by k,
			// add a valid pair.
			if ((arr[i] + arr[j]) % k == 0){
				validPairs++;	
			}
		}
	}
	
	// Print valid pairs.
	printf("%d\n", validPairs);

	return 0;
}
