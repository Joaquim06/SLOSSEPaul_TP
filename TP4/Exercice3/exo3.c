#include <stdio.h>
#include <stdlib.h>
#include <conio.h>





int main() {

	char prenom[20];
	char nom[20];

	printf_s("Quel est votre nom : ");
	scanf_s("%s", nom, _countof(nom));					//demande du nom

	printf_s("Quel est votre prenom : ");
	scanf_s("%s", prenom, _countof(prenom));			// demande du prenom


	printf_s("Madame ou Monsieur (H ou F) : ");

	if (_getch() == 'H') {
		printf_s(" \nMonsieur ");						//Si l'utilisateur à rentrer "H", monsieur sera affiché
	}
	else {
		printf_s(" \nMadame ");							//Si l'utilisateur à rentrer "F", madame sera affiché
	}

	printf_s("%s ", nom);
	printf_s("%s", prenom);


	return EXIT_SUCCESS;
}
