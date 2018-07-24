/*
 * WAP that accepts 3 integers and find the largest
 */

#include<stdio.h>

int main() {

	int a, b, c;

	printf("Enter your three numbers: \n");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c) {
		printf("%d is the largest no.\n", a);
	} else if (b > a && b > c) {
		printf("%d is the largest no.\n", b);
	} else if (c > b && c > a) {
		printf("%d is the largest no.\n", c);
	}

}
