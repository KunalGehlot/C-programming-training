/*
 *  WAP to copy string with fucntion
 */

#include <stdio.h>

char st[20] = { };

void StrCopy(char str[]) {
	int i = 0;

	while (str[i] != '\0') {
		st[i] = str[i];
		i++;
	}

	str[i] = '\0';

}

int main() {

	char str[20];

	printf("Enter a string: ");
	gets(str);

	StrCopy(str);

	printf("String is: %s\n", st);

}
