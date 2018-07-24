/*
 * WAP to use strcat and strcpy functions
 */
#include <stdio.h>
#include <string.h>

int main() {
	char st1[20] = "Hello ";
	char st2[20] = "World!";
	char st3[20];
	int l;

	strcpy(st3, st1);

	printf("Strcpy(st3,st1); -- %s\n", st3);

	strcat(st1, st2);

	printf("Strcat(st1, st2); -- %s\n", st1);

	l = strlen(st1);

	printf("Length of st1 iS: %d\n", l);

}
