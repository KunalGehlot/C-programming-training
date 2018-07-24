/*
 * WAP to concatenate two strings with function
 */
#include <stdio.h>

char str[20] = { };
char st[20] = { };

void StrCat(char ar1[], char ar2[]) {

	int i = 0, j = 0;

	while (ar1[i] != '\0') {
		i++;
	}

	while (ar2[j] != '\0') {
		ar1[i] = ar2[j];
		i++;
		j++;
	}

	ar1[i + j] = '\0';

}

int main() {

	printf("Enter a string: ");
	gets(str);

	printf("Enter another string: ");
	gets(st);

	StrCat(str, st);

	printf("String is: %s\n", str);

}
