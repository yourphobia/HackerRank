#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int Matrix[100][100];
	int diagonalSum1 = 0, diagonalSum2 = 0;
	int diff = 0;
	int MatrixSize = 0;

	// Read in the size of the array (that will square the Matrix).
	scanf("%d", &MatrixSize);
	
	// Read in the Matrix elements.
	for(int i = 0; i < MatrixSize; i++){
		for(int j = 0; j < MatrixSize; j++){
			scanf("%d", &Matrix[i][j]);
		}
	}
	
	// Calculate First Diagonal Sum
	for(int i = 0; i < MatrixSize; i++){
		for(int j = 0; j < MatrixSize; j++){
			// Checks if the coordinates (x,y) are equal, for example (0,0), (1,1), (2,2)
			// hence finding the numbers in a diagonal line.
			if(i==j){
				diagonalSum1 = diagonalSum1 + Matrix[i][j];
			}	
		}
	}

	// Caculate Second Diagonal Sum
	for(int i = 0; i < MatrixSize; i++){
		for(int j = 0; j < MatrixSize; j++){
			// I have to discuss this...
			if(i + j == (MatrixSize - 1)){
				diagonalSum2 = diagonalSum2 + Matrix[i][j];
			}
		}
	}	
	
	// Calculate the difference of the sums.
	diff = diagonalSum1 - diagonalSum2;
	printf("%d\n", abs(diff));
	return 0;
}
