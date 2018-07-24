/*
 * 	WAP TO REVERSE THE CASE OF AN ALPHABET
 */

#include <stdio.h>

int main() {

	char c;

	printf("Enter your character: ");
	scanf("%c", &c);

	if (c >= 'A' && c <= 'Z') {
		c += 32;
	} else if (c >= 'a' && c <= 'z') {
		c -= 32;
	}

	printf("%c\n", c);

}
