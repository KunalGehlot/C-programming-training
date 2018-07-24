/*
 *  WAP to swap to nos. call by reference
 */

#include <stdio.h>

void swap(int *, int *);

int in1, in2, out;

int main() {

	printf("Enter your numbers:\n");
	fflush(stdout);
	scanf("%d %d", &in1, &in2);

	swap(&in1, &in2);

	printf("%d \t %d\n", in1, in2);

}
void swap(int *x, int *y) {

	int temp;

	temp = *x;
	*x = *y;
	*y = temp;

}

