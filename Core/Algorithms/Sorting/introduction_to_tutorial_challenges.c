#include <stdio.h>
#include <stdlib.h>

int main (){
	int *arr; // Dynamic array
	int V; // Element to be searched for
	int n; // Size of the array
	int i; // Incrementer
	
	// Read in the item to search for.
	scanf("%d", &V);

	// Read in length of the array.
	scanf("%d", &n);
	
	// Dynamically allocate space for the array.
	arr = malloc(n * sizeof(int));
	
	// Read in all elements of the array.
	for(i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}
	
	// Linear search implementation
	for(i = 0; i < n; i++){
		if(arr[i] == V){
			printf("%d\n", i);
		}
	}

	return 0;
}
