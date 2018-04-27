#include <stdio.h>
#include <stdlib.h>

int main(){

	char *plaintext; // Unencrypted text stored as an array of chars (string).
	int shift; // The number of letters to shift each letter.
	int n; // Size of the plaintext
	int i; // Incrementer

	// Read in length of the plaintext.
	scanf("%d", &n);

	// Add an extra character because the null terminator counts as an element.
  	n += 1;
    
	// Dynamically allocate size for the plaintext array.
	plaintext = malloc(n * sizeof(char));

	// Read in the plaintext.
	scanf("%s", plaintext);
	
	// Read in the number the letters are to be shifted by.
	scanf("%d", &shift);

	// Go through every character in the plaintext.
	for(i = 0; i <= n; i++){
		// If the element is in the ascii range of a-z...
		if(plaintext[i] >= 'a' && plaintext[i] <= 'z'){
			// Shift the letter making sure to stay in range of the alphabet (26).
			plaintext[i] = (plaintext[i] - 'a' + shift) % 26 + 'a';

		}
		// If the element is in the ascii range of A-Z...
		if(plaintext[i] >= 'A' && plaintext[i] <= 'Z'){
			// Shift the letter making sure to stay in range of the alphabet (26).
			plaintext[i] = (plaintext[i] - 'A' + shift) % 26 + 'A';

		}
	}

	// Print every letter of the now encrypted cipher.
	printf("%s\n", plaintext);
	
	return 0;
}
