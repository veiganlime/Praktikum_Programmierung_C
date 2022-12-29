#include<stdio.h>
#include<stdlib.h>

#define DEBUG 0

void tausche(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;

	if (DEBUG ==1)
	{
		printf("Kontrolausgabe in tausche() - Funktion a = %d, b = %d \n", *a, *b);
	}

}

int main ()
{
	int a, b;

	a = 6;
	b = 3;

	printf("Vorher: a = %d b = %d  \n", a, b);

	tausche(&a, &b);

	printf("Nachher: a = %d b = %d  \n", a, b);

return(0);
}
/*Aufgabestellung: Funktionsparametr. Übergabeparametr von Funktionen
*Starten Sie ei neues Projekt hs_10. Definieren Sie in diesem Projekt zwei Variablen vom Typ ind und weisen Sie beliebige, verschiedene Were zu.
*ergaenzen Sie eine Funktion tausche() mit dem Rueckgabetyp void. Dieser Funktion sollen die beiden definierten Variablen(MIT ZEIGERN) uebergeben und innerhalb der Funktionen getauscht werden
*Rufen Sie die Funktion tausche() in main() auf und zeigen SIE anschliesend mit printf() den Inhalt der Variablen an*/
