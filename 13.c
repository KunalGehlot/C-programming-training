/*
 *  WAP to find the sum of even and odd nos. upto 50
 */

#include<stdio.h>

int main() {

	int i = 1, even = 0, odd = 0;

	while (i < 51) {
		if (i % 2 == 0)
			even += i;
		else
			odd += i;
		i++;
	}

	printf("Even - %d\n Odd - %d\n", even, odd);
}
