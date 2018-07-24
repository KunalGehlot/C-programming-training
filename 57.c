/*
 * WAP that will read the value of x and evaluate the following
 * Y=1 for x > 0
 * Y=0 for x = 0
 * Y=-1 for x < 0
 * using conditional operator
 */

#include <stdio.h>

int main() {

	int x, y;

	printf("Enter your no.: ");
	scanf("%d", &x);

	y = ((x < 0) ? -1 : (x > 0) ? 1 : 0);

	printf("Y: %d\n", y);
}
