#include<stdio.h>

int main() {

	int i;

	printf("Enter no\n");
	scanf("%d", &i);

	if (i % 2 == 0)
		printf("Even\n");
	else
		printf("Odd\n");

}
