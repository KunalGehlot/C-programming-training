/*
 * WAP to swap two nos. without using third variable
 */

#include <stdio.h>

int main() {

	int a, b;

	printf("Enter two nos:\n");
	scanf("%d %d", &a, &b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("A: %d B: %d\n", a, b);

}
