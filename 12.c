/*
 *  WAP to print 1-10 and also find the sum using while loop
 */

#include<stdio.h>

int main() {

	int i = 1, sum = 0;

	while (i < 11) {
		printf("%d\n", i);

		sum += i;

		i++;
	}

	printf("%d\n", sum);

}
