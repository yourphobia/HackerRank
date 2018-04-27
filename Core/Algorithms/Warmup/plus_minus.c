#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *arr;
	int arrSize = 0;
	double positiveNumbers = 0;
	double negativeNumbers = 0;
	double zeroValues = 0;
	double positivePercentage;
	double negativePercentage;
	double nonValuePercentage;

	// Read in the desired array size.
	scanf("%d", &arrSize);
	
	// Make sure the algorithm has something to work with.
	if(arrSize < 2){
		// Kill the program.
		printf("Your array needs to be atleast 2 elements long.\n");
		return -1;
	}

	// Dynamically allocate the size of the array.
	arr = malloc(arrSize * sizeof(int));
	
	// Read in the array elements.
	for(int i = 0; i < arrSize; ++i){
		scanf("%d", &arr[i]);
	}
	
	// Check which number is positive, negative or zero.
	for(int i = 0; i < arrSize; i++){
		if(arr[i] != 0){
			if(arr[i] > 0){
				positiveNumbers++;
			} else {
				negativeNumbers++;
			}
		} else {
			zeroValues++;
		}
	}
	
	// Calculate the percentages.
	positivePercentage = (double) positiveNumbers / arrSize;
	negativePercentage = (double) negativeNumbers / arrSize;
	nonValuePercentage = (double) zeroValues / arrSize;
	
	// Print the results.
	printf("%0.6lf\n", positivePercentage);
	printf("%0.6lf\n", negativePercentage);
	printf("%0.6lf\n", nonValuePercentage);

	return 0;
}
