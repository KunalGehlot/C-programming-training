/*
 *  WAP to add diagonal of a sq. matrix
 */

#include<stdio.h>

int main() {

	int ar[5][5], i, j, sum = 0;

	printf("Enter your array: \n");

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			scanf("%d", &ar[i][j]);
		}
	}

	for (i = 0; i < 5; i++) {
		sum += ar[i][i];
	}

	printf("Sum is: %d\n", sum);

}
