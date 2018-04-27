#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	long int *arr;
	int itemCount = 0;
	long int sum = 0;

	scanf("%d", &itemCount);
	
	// Dynamically allocate size of the array depending on
	// size of itemCount.	
	arr = malloc(sizeof(long int)*itemCount);

	for(int i = 0; i < itemCount; ++i){
		scanf("%ld", &arr[i]);
		sum += arr[i];

	}

	printf("%ld\n", sum);

	return 0;
}
