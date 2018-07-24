/*
 * WAP that will read the value of x and evaluate the following
 * Y=1 for x > 0
 * Y=0 for x = 0
 * Y=-1 for x < 0
 * using else if statemets
 */

#include <stdio.h>

int main() {

	int x, y;

	printf("Enter your no.: ");
	scanf("%d", &x);

	if (x > 0) {
		y = 1;
	} else if (x == 0) {
		y = 0;
	} else if (x < 0) {
		y = -1;
	}

	printf("Y: %d\n", y);
}
