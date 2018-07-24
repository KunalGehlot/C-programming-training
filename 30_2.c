/*
 *  WAP to find the factorial of a no. using recursion
 */

#include <stdio.h>

int fact(int);

int main() {

	int n, ans;

	printf("Enter your number: ");
	scanf("%d", &n);

	ans = fact(n);

	printf("Factorial is: %d\n", ans);

}

int fact(int in) {

	if (in == 0) {
		return 1;
	} else {
		return (in * fact(in - 1));
	}

}
