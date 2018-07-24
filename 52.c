/*
 * WAP to check if two nos. in a pair are in ascending or descending order
 */

#include <stdio.h>

int main() {

	int a, b;

	printf("Enter two nos. :\n");
	scanf("%d %d", &a, &b);

	if (a > b) {
		printf("Descending\n");
	} else {
		printf("Ascending\n");
	}

}
