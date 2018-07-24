/*
 * WAP to print final salary after fixed incentive
 */

#include <stdio.h>

int main() {
	int sal, out;

	printf("Enter salary: \n");
	scanf("%d", &sal);

	if (sal < 50000) {
		out = sal - (5 * sal / 100);
	} else if (sal >= 50000 && sal <= 75000) {
		out = sal - (10 * sal / 100);
	} else if (sal > 75000) {
		out = sal - (15 * sal / 100);
	}

	printf("Final sal: %d\n", out);

}
