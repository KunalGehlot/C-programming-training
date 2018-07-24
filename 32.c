/*
 *  WAP add the elements of an array
 */

#include <stdio.h>

int main() {

	int ar[5], i, sum;

	printf("Enter 5 elements: ");

	for (i = 0; i < 5; i++) {
		scanf("%d", &ar[i]);
	}

	printf("Sum of elements is: ");

	for (i = 0; i < 5; i++) {
		sum += ar[i];
	}

	printf("%d\n", sum);
}
