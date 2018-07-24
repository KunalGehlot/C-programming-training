/*
 * WAP to determine salvage value of an item when the purchase price,
 * years of service and the annual depreciation are given:
 * Dep = (Pur Price - Sal Val.)/yrs of service
 */

#include <stdio.h>

int main() {

	float pPrice = 10000, sVal, dpVal = 225;
	int yrs = 6;

	sVal = pPrice - (yrs * dpVal);

	printf("%1.2f is the Salvage value\n", sVal);

}
