/*
 * WAP to print the grade of students using following data
 *  80-100	First division with distinction
 *  60-79	First division
 *  50-59	Second division
 *	40-49	Pass
 *	0-39	Fail
 */

#include <stdio.h>

int main() {

	int marks, index;

	printf("Enter marks: \n");
	scanf("%d", &marks);

	index = marks / 10;

	switch (index) {
	case 10:
	case 9:
	case 8:
		printf("First divsion with distinction\n");
		break;
	case 7:
	case 6:
		printf("First division\n");
		break;
	case 5:
		printf("Second division\n");
	case 4:
		printf("Pass\n");
		break;
	case 3:
	case 2:
	case 1:
	case 0:
		printf("Fail\n");
		break;
	default:
		printf("Invalid input\n");

	}

}
