/*
 *  WAP to swap two nos. call by reference
 */

#include <stdio.h>

void swap(int, int);

int in1, in2;

int main() {

	printf("Enter your numbers:\n");
	scanf("%d %d", &in1, &in2);

	swap(in1, in2);

	printf("%d \t %d\n", in1, in2);

}
void swap(int x, int y) {

	int temp;

	temp = x;
	x = y;
	y = temp;

	printf("%d \t %d\n", x, y);
}

