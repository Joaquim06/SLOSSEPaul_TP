#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

#define NBMAXNOTES 30

int main() {

	float Note[NBMAXNOTES + 1];
	float Tmp[NBMAXNOTES + 1]; // copie du tableau Note
	int Index[NBMAXNOTES + 1];
	int i = 0, j = 0;
	float note = 0;
	int DemSortie = 0;
	int NbrNoteV = 0;
	int NbrA = 0;
	float moy = 0;
	float Gnote = 0;
	float Pnote = 0;

	for (j = 1; j < NBMAXNOTES + 1; j++) { //Initialisation valeurs Tableau à -2
		Note[j] = -2;
		Tmp[j] = -2;
	}
	printf_s("\nentrer une note comprise entre 0 et 20\n");

	do { // boucle de saisit des notes
		i++;
		printf_s("\nEntrer la note n%d : ", i);
		scanf_s("%f", &note);
		do {
			if ((note < 0) || (note > 20)) {

				int rep;
				printf_s("Eleve absent ? ou voulez-vous arreter la saisie des notes?A/O/N");
				rep = _getch();

				switch (rep) {
				case'A':
					NbrA++;
					printf_s("absent");		// eleve absent
					Note[i] = -1;
					Tmp[i] = -1;
					break;

				case 'O':
					Note[i] = -2;
					Tmp[i] = -2;			// demande de sortie de saisit 
					DemSortie = 1;
					break;

				case 'N':
					printf_s("Saisissez une note valide\n");
					scanf_s("%f", &note);								// Continuer la saisit à la valeur où il y a eu une erreur
					break;
				}
			}
		} while ((DemSortie == 0) && ((note < 0) || (note > 20)));

		if ((note >= 0) && (note <= 20)) {
			Note[i] = note;
			Tmp[i] = note;							//rentrée des notes dans le tableau Note et sa copie
			NbrNoteV++;
		}


	} while ((DemSortie == 0) && (i < (NBMAXNOTES)) && ((note >= 0) && (note <= 20)));


	printf_s("\nIl y a %d notes valides\n", NbrNoteV);

	printf_s("\nIl y a  %d absences\n", NbrA);



	float tempo = 0;
	for (i = 1; i <= NBMAXNOTES; i++) {
		if ((Note[i] < 20) && (Note[i] > 0)) {
			tempo += Note[i];								//calcul de la moyenne
		}
		moy = tempo / (NbrNoteV - 1);
	}
	printf_s("\nLa moyenne de ces notes est : %.2f\n", moy);



	for (i = 1; i <= 30; ++i) {
		if ((note >= 0) && (note <= 20)) {
			if (Note[i - 1] > Note[i]) {					//Recherche de la plus petite note
				Pnote = Note[i];
			}
		}


	}
	printf("\nLa plus petite note est %.2f, ", Pnote);



	for (i = 1; i <= NBMAXNOTES; ++i) {
		if (Gnote < Note[i]) {
			Gnote = Note[i];								//Recherche de la plus grande note
		}

	}
	printf("La plus grande est %.2f\n", Gnote);



	float tmpo = 0;
	float ecartT;
	for (int i = 0; i <= NbrNoteV - 1; i++)
	{
		if ((Note[i] <= 20) && (Note[i] >= 0)) {
			tmpo = tmpo + pow((Note[i] - moy), 2);			 //Calcul de l'écart type
		}
	}
	tmpo = (tmpo / (NbrNoteV));
	ecartT = sqrt(tmpo);
	printf_s("\nL'ecart type est de : %.2f\n", ecartT);



	printf_s("\nNo note | Valeur note\n");
	for (i = 1; i <= 30; i++) {
		printf_s("\n %d          %.2f\n", i, Note[i]);			//Affichage du Tableau
	}




	printf_s("\nRang | No note | Valeur note\n");
	float tmp1, tmp2;
	for (i = 1; i < NBMAXNOTES + 1; i++)
	{
		for (j = 0; j < NBMAXNOTES - i + 1; j++)
		{

			if (Tmp[j] < Tmp[j + 1])
			{
				tmp1 = Tmp[j];
				Tmp[j] = Tmp[j + 1];
				Tmp[j + 1] = tmp1;
			}
		}
	}


	for (i = 1; i < NBMAXNOTES + 1; ++i) {
		if ((Note[i] < 20) && (Note[i] > 0)) {
			printf("\n %d		  %.2f\n", i, Tmp[i]);				//Affichage des notes triées par ordre décroissant
		}
	}

	printf_s("Bye!");

	return EXIT_SUCCESS;
}