/*
 * WAP to find the largest and smallest element in an array
 */
#include<stdio.h>

int main() {

	int ar[10], i, lar, sma;

	printf("Enter your array: \n");

	for (i = 0; i < 10; i++) {
		scanf("%d", &ar[i]);
	}

	lar = sma = ar[0];

	for (i = 0; i < 10; i++) {
		if (ar[i] > lar) {
			lar = ar[i];
		}
		if (ar[i] < sma) {
			sma = ar[i];
		}
	}

	printf("Largest element is: %d\nSmallest element is: %d\n", lar, sma);

}
