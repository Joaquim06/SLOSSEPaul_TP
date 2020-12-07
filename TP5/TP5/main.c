#include <stdio.h>
#include <stdlib.h>
#include "tab.h"
#define TAB1SIZE 10
#define TAB2SIZE 100



int main() {
	int myTab1[TAB1SIZE];
	int myTab2[TAB2SIZE];

	initTab(myTab1, TAB1SIZE);     
	afficheTab(myTab1, TAB1SIZE, 5);  //test des fonctions avec myTab1

	printf_s("\n");

	initTab(myTab2, TAB2SIZE);       //test de la fonction init avec myTab2


	initTab2(myTab2, 20);
	afficheTab(myTab1, TAB1SIZE, 20);
	return EXIT_SUCCESS;
}