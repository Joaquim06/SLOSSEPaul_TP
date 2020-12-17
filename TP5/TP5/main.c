#include <stdio.h>
#include <stdlib.h>
#include "tab.h"
#define TAB1SIZE 10
#define TAB2SIZE 100
#define TAB2AJU



int main() {
	int myTab1[TAB1SIZE];

	initTab(myTab1, TAB1SIZE);     
	afficheTab(myTab1, TAB1SIZE, 5);  //test des fonctions avec myTab1

	printf_s("\n");


	int* myTab2 = NULL; 
	int tabSize = TAB2SIZE; 
	int nbElts = 0;
	myTab2 = (int*) malloc(TAB2SIZE * sizeof(int)); if (myTab2 != NULL) { initTab(myTab2, tabSize); }
	else { printf("mémoire insuffisante"); return(-1); }

	initTab(myTab2, TAB2SIZE);       //test de la fonction init avec myTab2


	for (int i = 1; i <= 20; i++) {
		myTab2[i] = i;
	}

	afficheTab(myTab2, TAB2SIZE, 20);
	free(myTab2);

	return EXIT_SUCCESS;
}