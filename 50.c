/*
 * WAP to check wherther a number is even or odd
 */

#include<stdio.h>

int main() {

	int in;

	printf("Enter your number: ");
	scanf("%d", &in);

	if (in % 2 == 0) {
		printf("Even\n");
	} else {
		printf("Odd\n");
	}

}
