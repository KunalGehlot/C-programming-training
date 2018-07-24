#include <stdio.h>

int main() {

	char k = 5;

	switch (k) {
	default:
		printf("Last\n");
	case 4:
		printf("four\n");
	case 1:
		break;
		printf("One\n");
	case 2:
		printf("Two\n");
		break;
	}

}
