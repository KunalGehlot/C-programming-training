/*
 *  WAP to print pattern
 */

#include <stdio.h>

int main() {
	int i, j;

	for (i = 1; i < 8; i++) {
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

}