#include <stdio.h>
#include <stdlib.h>
#include "tab.h"
#pragma once
#define TAILLEAJOUT 10



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
    if (nbElts >= size) {
        realloc(void *size, size_t TAILLEAJOUT);
    }
}

/*#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int i;
    int a;
    int eto=1;
    int ote;
    int space = 0;
    
    printf("Entrez un valeur n impaire : ");
    scanf_s("%d", &n);
    space = n;
    ote = n;

    for (a = 0; a < n; a++) {
        for (i = (space - 1) / 2; i > 0; i--) {
            printf(" ");
        }

        for (a = 0; a < eto; a++) {
            printf("*");
        }
        eto += 2;
        space -= 2;
        printf("\n");
    }

    space = 0;
    ote-=2;

    for (a = 0; a < n-1; a++) {

        for (i = (space + 1) / 2; i >= 0; i--) {
            printf(" ");
        }

        for (int p = ote; p > 0; p--) {
            printf("*");
        }
        ote -= 2;
        space += 2;

        printf("\n");
    }
    return 0;

}  */