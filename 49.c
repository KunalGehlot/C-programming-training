/*
 * WAP to check  whether an entered character is Vowel
 * or not using only if statement
 */

#include <stdio.h>

int main() {

	char c;

	printf("Enter your character: ");
	scanf("%c", &c);

	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
		printf("Vowel\n");
	} else {
		printf("Consonant\n");
	}

}
