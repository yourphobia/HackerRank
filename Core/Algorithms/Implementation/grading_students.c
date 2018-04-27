#include <stdio.h>
#include <stdlib.h>

// Simple function that takes a number and rounds it to the next higher
// multiple of another number.
int roundUpMultiple(int number, int multiple){
	return (((number + multiple - 1)/multiple) * multiple);
}

int main(){
	
	int *grades;
	int numOfGrades;

	// Read in number of grades.
	scanf("%d", &numOfGrades);
	
	// Dynamically allocate array.
	grades = malloc(numOfGrades * sizeof(int));

	// Read in and calculate all elements of the array.	
	for(int i = 0; i < numOfGrades; ++i){

		// Read in all elements.
		scanf("%d", &grades[i]);

		// If the grade is not a fail, check if the difference
		// of the result of rounding up the element's value to the
		// next higher multiple of 5 and the element's value is
		// less than 3.
		if(grades[i] >= 38){
			if((roundUpMultiple(grades[i], 5) - grades[i]) < 3){
				// Grade gets rounded up.
				grades[i] = roundUpMultiple(grades[i], 5);
			}
		}
		printf("%d\n", grades[i]);
	}
	return 0;

}
