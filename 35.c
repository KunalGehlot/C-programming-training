/*
 *  WAP to pass an array to a function
 */

#include<stdio.h>

void print(int *);

int i;

int main() {

	int ar[5];

	printf("Enter you array: \n");
	for (i = 0; i < 5; i++) {
		scanf("%d", &ar[i]);
	}

	print(ar);

}

void print(int *arr) {

	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

}
