#include <stdio.h>
#include <stdlib.h>
#include "tp4.h"



int main() {
	HEURE HeureDebut = { 12, 30 };
	HEURE HeureFin = { 00, 00 };
	HEURE Duree = { 00, 45 };

	HeureFin.minute = HeureDebut.minute + Duree.minute;


	if (HeureFin.minute >= 60) {
		HeureFin.heure += 1;						//Si les minutes dépasse 60, on rajoute 1 à l'heure
		HeureFin.minute = HeureFin.minute % 60;
	}

	HeureFin.heure += HeureDebut.heure;

	printf_s("\nHeure au debut : %d:%d\n", HeureDebut.heure, HeureDebut.minute);
	printf_s("\nDuree : %d:%d\n", Duree.heure, Duree.minute);
	printf_s("\nHeure de fin : %d:%d\n", HeureFin.heure, HeureFin.minute);

	return EXIT_SUCCESS;
}