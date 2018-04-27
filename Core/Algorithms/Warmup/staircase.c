#include <stdio.h>
#include <stdlib.h>

int main(){

	int stairCaseSteps = 0;

	// Predefine incrementers.
	// i needs to be 1, otherwise the first iteration will evaluate to 0, thus printing nothing.
	int i = 1;	
	int j = 0;

	// Read in the number of steps.
	scanf("%d", &stairCaseSteps);
	
	// Loop through and print every element a certain number of times.
	while(i <= stairCaseSteps){
		
		// Print spaces (starCaseSteps - i).
		for(j = stairCaseSteps; j > i; j--){
			printf(" ");
		}
		
		// Print '#' times i.
		for(j = 0; j < i; j++){
			printf("#");		
		}

		// End each row.
		printf("\n");
		i++;
	}

	return 0;
}
