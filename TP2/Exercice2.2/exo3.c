#include<stdio.h>
#include<stdlib.h>

int main() {
	int a = 0, b = 0;

	printf("saisissez une annee\n");
	scanf_s("%d", &a);



	if (a % 4 == 0) {
		if (a % 100 == 0) {
			if (a % 400 == 0) {
				b = 1;
			}
			else
			{
				b = 0;
			}
		}
		else
		{
			b = 1;
		}
	}
	else
	{
		b = 0;
	}

	if (b == 1)
	{
		printf("L'annee %d est bissextile", a);
	}
	else
	{
		printf("L'annee %d n'est pas bissextile", a);
	}

	return EXIT_SUCCESS;
}
