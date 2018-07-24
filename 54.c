/*
 * WAP to sort nos. as: A special no. if divisible by 15.
 * Big, if greater than 999. Weird if divisible by 5 & 6 but not 18
 * Scary if big
 */

#include <stdio.h>

int main() {

	int in;

	printf("Enter your no: ");
	scanf("%d", &in);

	if (in > 999) {
		printf("BIG!!\n");
		printf("SCARRYYYY!!!!\n");
	} else if (in % 6 == 0 && in % 5 == 0 && in % 18 != 0) {
		printf("~Weird~\n");
	} else if (in % 15 == 0) {
		printf("Special!\n");
	}

}
