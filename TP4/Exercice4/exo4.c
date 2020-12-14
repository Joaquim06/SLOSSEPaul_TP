#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Palindrome(char str[]) {
	int gauche = 0;
	int droite = strlen(str) - 1;

	while (droite > gauche) {
		if (str[gauche++] != str[droite--]) {						//On vérifie que le caractère de gauche est égale à celui de droite 
			printf_s("\n%s n'est pas un palindrome\n", str);		//S'il ne l'est pas, on dit que le mot n'est pas un palindrome 
			return;
		}
	}
	printf_s("\n%s est un palindrome\n", str);
}

int main() {

	Palindrome("radar");
	Palindrome("kayak");
	Palindrome("code");

	return EXIT_SUCCESS;
}