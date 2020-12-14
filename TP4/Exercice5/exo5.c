#include <stdio.h>
#include <stdlib.h>


int main() {

	char buffer[1024];
	int nbrMot = 0;
	int lmoy = 0;


	printf_s("Ecrivez une phrase : \n");
	gets_s(buffer, 1024);

	for (int i = 0; buffer[i] != '\0'; i++)
	{
		if (buffer[i] == ' ') {						//boucle pour compter le nombre de mot
			nbrMot++;
		}
	}

	int tmp1 = 0, tmp2 = 0;
	for (int i = 1; buffer[i] != '\0'; i++) {
		if (buffer[i] != ' ') {
			tmp1 += 1;								//boucle pour calculer la longueur moyenne des mots
		}
		lmoy = tmp1 / nbrMot;
	}
	printf_s("\nLe nombre de mots dans la phrase est : %d\n", nbrMot + 1);
	printf_s("\nla longueur moyenne des mots est : %d\n", lmoy);

	return EXIT_SUCCESS;
}