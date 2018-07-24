/*
 *  WAP to find the largest no among 3
 */

#include <stdio.h>

int larg(int, int, int);

int main() {

	int a, b, c, x;

	printf("Enter your three numbers:\n");
	scanf("%d %d %d", &a, &b, &c);

	x = larg(a, b, c);

	printf("The largest number is: %d\n", x);

}

int larg(int p, int q, int r) {
	if (p > q && r < p) {
		return p;
	} else if (q > p && r < q) {
		return q;
	} else if (r > p && q < r) {
		return r;
	}
}
