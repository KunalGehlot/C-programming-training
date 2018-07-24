/*
 *  WAP to convert specified days into years,
 * weeks and days
 */

#include <stdio.h>

int main() {
	int in, temp;
	int yr, week, days;

	printf("Enter days: \n");
	scanf("%d", &in);

	yr = in / 365;
	temp = in % 365;
	week = temp / 7;
	days = temp % 7;

	printf("Years = %d, Weeks = %d, Days = %d\n", yr, week, days);

}
