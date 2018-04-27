#include <stdio.h>
#include <stdlib.h>

int main(){

	long int arr[5];
	int i;
	int j;
	long int maxSum = 0;
	long int minSum = 0;
	long int length = sizeof(arr)/ sizeof(*arr);

	// Read all elements into the array
	for(i = 0; i < length; i++){
		scanf("%ld", &arr[i]);
	}

	// Sort the array with insertion sort.
	for(i = 0; i < length; i++){
		int key = arr[i];
		j = i - 1;
		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
    
    // Calculate the Max Sum.
    // Find the summation of arr[1] to arr[4].
	for(j = 1; j < 5; j++){
		maxSum += arr[j];
	}
    
    // Calculate the Mix Sum.
    // Find the summation of arr[0] to arr[3].
	for(j = 0; j < 4; j++){
		minSum += arr[j];
	}

	// Print the Min and Max sums.
	printf("%ld %ld\n", minSum, maxSum);
	return 0;

}
