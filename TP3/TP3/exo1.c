#include <stdlib.h>
#include <stdio.h>


#define carre(x) x*x;

void main() {
	int Nb = 5; // D�claration variable Nb =5
	int res1 = 0, res2 = 0, tmp = 0, res3 = 0; // D�claration des diff�rentes variables utiles
	res1 = carre(Nb);// Calcul pour le carr� de Nb
	res2 = carre(Nb + 1); // Calcul pour le carr� de Nb + 1 mais probl�me
	tmp = Nb + 1; // resolution du probleme cr�ee par Nb+1 en creant une variable 
	res3 = carre(tmp); //calcul correcte pour Nb+1
	printf_s("%d\n", res1);
	printf_s("%d\n", res2); // R�sultat faux pour le carr� de Nb+1, 
	printf_s("%d\n", res3);

	return EXIT_SUCCESS;
}