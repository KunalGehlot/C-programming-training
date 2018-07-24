/*
 * WAP to accept n no and arrange them in an ascending order
 */
#include <stdio.h>

int main() {

	int n, i, temp, j;

	printf("Enter array size: ");
	scanf("%d", &n);

	int ar[n];

	printf("Enter your array: \n");

	for (i = 0; i < n; i++) {
		scanf("%d", &ar[i]);
	}

	while (i) {
		j = 0;

		for (i = 0; i < n; i++) {
			if (ar[i] > ar[i + 1]) {
				temp = ar[i];
				ar[i] = ar[i + 1];
				ar[i + 1] = temp;
				j = 1;
			}

		}

		if (j == 0) {
			break;
		}

	}

	printf("Your array is: \n");

	for (i = 0; i < n; i++) {
		printf("%d\t", ar[i]);
	}

}
