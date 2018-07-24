/*
 *  WAP to print pattern
 */
#include <stdio.h>

int main() {

	int i, j, k;

	for (i = 0; i < 11; i++) {
		printf("*");
	}
	for (j = 0; j < 6; j++) {
		printf("\n");
		for (k = 0; k < 5; k++) {
			printf(" ");
		}

		printf("*");
		//printf("\n");
	}
	printf("\n");
}
