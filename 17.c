/*
 *  WAP to check whether a no. is palindrome
 */

#include <stdio.h>

int main() {

	int in, temp, sum = 0, r;

	printf("Enter number: \n");
	scanf("%d", &in);

	temp = in;

	while (in != 0) {
		r = in % 10;
		sum = (sum * 10) + r;
		in = in / 10;
	}

	printf("Rev is %d\n", sum);

	if (temp == sum)
		printf("Palindrome number\n");
	else
		printf("Boring number\n");

}
