#include <stdio.h>

int main(){
	
	int alice[3];
	int bob[3];
	
	int aliceScore = 0;
	int bobScore = 0;

	scanf("%d %d %d", &alice[0], &alice[1], &alice[2]);
	scanf("%d %d %d", &bob[0], &bob[1], &bob[2]);

	for(int i = 0; i < 3; i++){
		if(alice[i] != bob[i]){
			if(alice[i] > bob[i]){
				aliceScore++;
			} else {
				bobScore++;
			}
		} else {
			//printf("Can't do anything, they're equal.\n");
		}
	}

	printf("%d %d\n", aliceScore, bobScore);

	return 0;
}
