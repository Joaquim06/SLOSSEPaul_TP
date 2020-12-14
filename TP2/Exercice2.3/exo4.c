#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {

	int b = 0, t = 0, n;
	srand(time(NULL));
	n = rand() % 50;

	while (b == 0) {
		int rep;
		printf_s("find the value : ");
		scanf_s("%d", &rep);
		if (rep < n) {
			printf_s("bigger : ");
			t += 1;
		}
		if (n < rep) {
			printf_s("smaller : ");
			t += 1;
		}
		if (rep == n) {
			b += 1;
			t += 1;
			printf_s("You found the answer in %d tries !", t);
		}
	}

	return EXIT_SUCCESS;
}