/*
 * WAP to check whether a year is a leap year
 */

#include <stdio.h>

int main() {
	int yr;

	printf("Enter year: \n");
	scanf("%d", &yr);

	if (yr % 4 == 0 || yr % 100 == 0 && yr % 400 == 0) {
		printf("It is a leap year!!!\n");
	} else {
		printf("Boring normal year...\n");
	}

}
