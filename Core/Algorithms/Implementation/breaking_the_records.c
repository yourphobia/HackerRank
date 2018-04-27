#include <stdio.h>
#include <stdlib.h>

int main(){
	int *scores; // Dynamic Array
	int n; // Size of the Array.
	int i; // Incrementer.
	int maximum = 0; // Maria's max score.
	int minimum = 0; // Maria's min score.
	int maxBreaks = 0; // Times Maria broke her record for most points.
	int minBreaks = 0; // Times Maria broke her record for least points.
	
	// Read in the size of the array.
	scanf("%d", &n);
	
	// Dynamically allocates the size of the array.
	scores = malloc(n * sizeof(int));

	// Read in all the elements of the array.
	for(i = 0; i < n; ++i){
		scanf("%d", &scores[i]);

		// Check if maximum and minimum have not been set yet.
		if(i != 0){

			// If Maria broke her record for her most points.
			if(scores[i] > maximum){
				maximum = scores[i]; // Set her record.
				maxBreaks++; // Add a time she broke her record.
			}
			
			// If Maria broke her record for her least points.
			if(scores[i] < minimum){
				minimum = scores[i]; // Set her record.
				minBreaks++; // Add a time she broke her record.
			}

		} else {
			// Set maximum and minimum.
			maximum = scores[i];
			minimum = scores[i];
		}
	}

	// Print results.
	printf("%d %d\n", maxBreaks, minBreaks);

	return 0;
}
