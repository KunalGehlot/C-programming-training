/*
 *  WAP to find armstring nos. upto 1000
 */

#include <stdio.h>

int main() {

	long int in, temp, r, out;

	for (in = 1; in < 1000; in++) {
		out = 0;

		temp = in;

		do {
			r = temp % 10;
			temp = temp - r;
			temp = temp / 10;
			out += (r * r * r);
		} while (temp > 0);

		if (in == out) {
			printf("Armstrong number - %ld\n", in);
		}
	}
}

