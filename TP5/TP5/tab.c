#include <stdio.h>
#include <stdlib.h>
#include "tab.h"
#pragma once



int initTab(int *tab, int size) {
	if (tab == NULL || size < 0) {
		return -1;
	}
											// fonction qui remplit un tableau d’entiers de taille size avec des 0
	for (int i = 0; i < size; i++) {
		tab[i] = 0;
	}
}


int afficheTab(int *tab, int size, int nbElts) {

	if (tab == 0 || size < 0 || size < nbElts) {		// fonction qui affiche les nbElts premièrs éléments du tableau tab
		return -1;				
	}

	
	for (int i = 0; i < nbElts; i++) {
		printf_s("%d", tab[i]);
	}

	return 0;
}



int initTab2(int* tab, int nbr) {
	for (int i = 1; i < nbr; i++) {
		tab[i] = i;								// fonction qui remplit un tableau d’entiers de 1 à un nbr
	}
}


int* ajoutElementDansTableau(int* tab, int* size, int* nbElts, int element) {

}
