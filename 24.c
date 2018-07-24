/*
 * WAP to multiply 2 nos.
 */

#include<stdio.h>

int mult(int, int);

int main() {
	int a, b, res;

	printf("Enter 2 nos: \n");
	scanf("%d %d", &a, &b);

	res = mult(a, b);

	printf("Multiplication is : %d\n", res);

}

int mult(int x, int y) {
	return (x * y);
}

