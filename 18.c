/*
 * WAP to print fibonacci series upto n
 */

#include <stdio.h>

int main() {

	double i = 1, lim, n1 = 0, n2 = 1, temp;

	printf("Enter limit:\n");
	scanf("%lf", &lim);

	for (i = 1; i <= lim; i++) {
		printf("%1.0lf \t", n1);

		temp = n1 + n2;
		n1 = n2;
		n2 = temp;
	}

}
