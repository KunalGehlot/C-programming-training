/*
 * WAP to print the following in a reverse way
 * as given: C1 = 'H'
 * 	C2 = 'T'
 * 	C3 = 'M'
 * 	C4 = 'L'
 */

#include <stdio.h> 

int main() {

	char c1 = 'H', c2 = 'T', c3 = 'M', c4 = 'L';

	printf("%c%c%c%c\n", c1, c2, c3, c4);
	printf("%c%c%c%c\n", c4, c3, c2, c1);

}
