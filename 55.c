/*
 * WAP that will read the value of x and evaluate the following
 * Y=1 for x > 0
 * Y=0 for x = 0
 * Y=-1 for x < 0
 * using nested if statements
 */

#include <stdio.h>

int main() {

	int x, y;

	printf("Enter your no.: ");
	scanf("%d", &x);

	y = 1;

	if (x <= 0) {
		y = 0;
		if (x < 0) {
			y = -1;
		}
	}

	printf("Y: %d\n", y);
}
