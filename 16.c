/*
 *  WAP to reverse a no.
 */

#include <stdio.h>

int main() {

	int in, temp, sum = 0;

	printf("Enter number: \n");
	scanf("%d", &in);

	while (in != 0) {
		temp = in % 10;
		sum = (sum * 10) + temp;
		in = in / 10;
	}

	printf("Rev is %d\n", sum);

}
