/*
 * WAP to enter the name, marks in for subjects and calculate
 * the total marks and their percentage. Print  the info
 */

#include <stdio.h>

int main() {

	char name[20];
	int sub1, sub2, sub3, sub4, sub5, sum;
	float percentage;

	printf("Enter you name: ");
	scanf("%s", name);

	printf("Enter marks: \nSub 1: ");
	scanf("%d", &sub1);
	printf("Sub 2: ");
	scanf("%d", &sub2);
	printf("Sub 3: ");
	scanf("%d", &sub3);
	printf("Sub 4: ");
	scanf("%d", &sub4);
	printf("Sub 5: ");
	scanf("%d", &sub5);

	sum = sub1 + sub2 + sub3 + sub4 + sub5;
	percentage = (sum / 5);

	printf("Percentage of %s is: %.2f\n", name, percentage);

}
