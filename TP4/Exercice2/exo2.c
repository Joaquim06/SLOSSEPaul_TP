#include <stdio.h>
#include <stdlib.h>

#define SEPARATEUR '/'
#define TAILLETAB1 20




int main() {

	int* MyPtr;
	int MyTab1[TAILLETAB1];


	for (int i = 0; i < TAILLETAB1; i++) {
		MyTab1[i] = i + 1;							//Remplissage tableau de 1 à 20
	}


	for (int i = 0; i < TAILLETAB1; i++) {
		printf_s("%d %c", MyTab1[i], SEPARATEUR);				// affichage tableau
	}



	printf_s("\n");
	for (MyPtr = MyTab1 + (TAILLETAB1 - 1); MyPtr != MyTab1 - 1; MyPtr--) {
		printf_s("%d %c", *MyPtr, SEPARATEUR);									//affichage tableau (Décrémentation)
	}


	return EXIT_SUCCESS;
}
