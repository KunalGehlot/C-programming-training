/*
 * WAP to read a char and print it in the reverse case
 */

#include <stdio.h>

int main () {
	
	char c;
	
	printf("Enter your character: \n");
	scanf("%c", &c);
	
	if (c>= 'a' && c<='z') {
	   c = c - 32;
	} else if (c >= 'A' && c <= 'Z'){
		c = c + 32;
	}
	
	printf("%c\n", c);
}
