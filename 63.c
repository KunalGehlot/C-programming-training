/*
 * WAP to read and display 2D strings
 */

#include <stdio.h>

int main() {

	char names[3][20];

	printf("Enter name of first person: ");
	scanf("%s", names[0]);
	printf("Enter name of second person: ");
	scanf("%s", names[1]);
	printf("Enter name of third person: ");
	scanf("%s", names[2]);

	printf("P1: %s\nP2: %s\nP3: %s\n", names[0], names[1], names[2]);

}
