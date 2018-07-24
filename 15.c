/*
 *  WAP to fins sum of digits of a no.
 */

#include <stdio.h>

int main() {

	int in, temp, sum = 0;

	printf("Enter number: \n");
	scanf("%d", &in);

	do {
		temp = in % 10;
		in = in - temp;
		in = in / 10;
		sum += temp;
	} while (temp > 0);

	printf("Sum is: %d\n", sum);

}
