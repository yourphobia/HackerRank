#include <stdio.h>
#include <stdlib.h>

int main(){

	int *bill; // Dynamic array
	int n; // Size of the array
	int k; // Item that Anna did not eat
	int b; // Amount Brian charged Anna
	int sum = 0; // Sum of the prices
	int i; // Incrementer
	
	// Read in the size of the array and
	// the item Anna did not eat.
	scanf("%d %d", &n, &k);
	
	// Allocate space for the array.
	bill = malloc(n * sizeof(int));
	
	// Read in all the elements of the array.
	for(i = 0; i < n; ++i){
		scanf("%d", &bill[i]);
	}
	
	// Read in the amount Brian charged Anna.
	scanf("%d", &b);
	
	// Summate the elements in the array.
	for(i = 0; i < n; i++){
		sum += bill[i];
	}
	
	// If the bill (excluding the items Anna is allergic to)
	// split in half is equal to Brian's charge, print 
	// "Bon Appetit".
	if((sum - bill[k])/2 == b){ 
		printf("Bon Appetit\n");
	} else {
		// Print the amount owed by Brian.
		printf("%d\n", sum - (sum - bill[k]/2));
	}

	return 0;
}
