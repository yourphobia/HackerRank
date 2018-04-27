#include <stdio.h>
#include <stdlib.h>

int main(){

	int *candleArr;
	int numOfCandles;
	int i, j, k, key;
	int tallest;
	int tallestCandles;

	// Read in number of candles.
	scanf("%d", &numOfCandles);

	// Dynamically allocate size of the array dependning on number of candles.
	candleArr = malloc(numOfCandles * sizeof(int));

	// Read elements into array.
	for(i = 0; i < numOfCandles; ++i){
		scanf("%d", &candleArr[i]);
	}

	// Sort the array with insertion sort.
	for(i = 0; i < numOfCandles; i++){
		key = candleArr[i];
		j = i - 1;
		while(j >= 0 && candleArr[j] > key){
			candleArr[j + 1] = candleArr[j];
			j--;
		}
		candleArr[j + 1] = key;
	}

	// Set the max number in the array, minus 1 because indexing starts at 0.
	tallest = candleArr[numOfCandles - 1];

	// Initiate the incrementer.
	k = numOfCandles - 1;
    
	// Go through each element in the array and check if the value is equal
	// to the largest number in the array.
    while(k >= 0){
        if(candleArr[k] == tallest){
             tallestCandles++;
        }
      --k;
    }

	printf("%d\n", tallestCandles);
	return 0;
} 
