#include <stdlib.h>
#include <stdio.h>


int main() {
	unsigned int  val = 2868838400;
	unsigned int tmp = val;

	//nombre d'octets
	printf_s("\nLe nombre d'octets utilises est : %u \n", sizeof(val));

	int nbBits = 8 * sizeof(val);

	printf_s("\nle nombre de bits : %d\n", nbBits);

	for (int i = 1; i <= nbBits; i++) {

		if (tmp & (1)) {
			printf_s("\nBit %d : ON\n", i);
		}

		else {
			printf_s("\nBit %d : OFF\n", i);
		}
		tmp = tmp >> 1;
	}

	printf_s("\nBye !\n");


	return EXIT_SUCCESS;
}