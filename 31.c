/*
 * WAP to read and print an array
 */
#include <stdio.h>

int main() {

	int ar[20], i;

	printf("Enter 20 elements: ");

	for (i = 0; i < 20; i++) {
		scanf("%d", &ar[i]);
	}

	printf("Elements are: \n");

	for (i = 0; i < 20; i++) {
		printf("%d\t", ar[i]);
	}

}
