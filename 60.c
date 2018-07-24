/*
 * WAP to find the length of a string using pointer
 */
#include <stdio.h>

int main() {

	char c[20];
	char *st = c;
	int i = 0;

	printf("Enter your string: ");
	scanf("%s", c);

	printf("%s\n", c);

	while (*st != '\0') {
		*st++;
		i++;
	}

	printf("Length of the string is: %d\n", i);

}
