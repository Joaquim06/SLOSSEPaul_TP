#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 100

int main() {
	int Tab[Max + 1];
	int val[Max + 1];
	srand(time(NULL));
	int tmp = 0;
	int valr = 0;
	int nbrval = 0;
	int* curseur = Tab;

	for (int i = 0; i <= Max; i++) {
		tmp = rand() % 20 + 1;
		Tab[i] = tmp;
	}

	printf_s("Entrer la valeur recherchee : ");

	scanf_s("%d", &valr);
	int j = 0, i = 0;
	for (curseur = Tab + Max - 1; curseur != Tab - 1; curseur--) {
		if (valr == *curseur) {
			val[j] = i;
			nbrval += 1;
			j++;
		}
		i++;
	}

	printf_s("La valeur %d a ete trouvee en %d", valr, val[0]);

	for (int i = 1; i < nbrval; i++) {
		printf_s(", puis en %d", val[i]);
	}

	return EXIT_SUCCESS;
}