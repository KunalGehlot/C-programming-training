/*
 * WAP to copy one string to another using pointers
 */

#include<stdio.h>

void copy_string(char*, char*);

int main() {
	char in[100], out[100];
	printf("Enter in string\n");
	scanf("%s", in);
	copy_string(out, in);
	printf("Copied string is: %s\n", out);
}

void copy_string(char *out, char *in) {
	while (*in) {
		*out = *in;
		in++;
		out++;
	}
	*out = '\0';
}
