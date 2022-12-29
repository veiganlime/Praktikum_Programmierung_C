#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ANZAHL 10

void bubble (int *, int);
void ausgabe(int *, int);
void qs(int*, int);
int compare_value(int, int);

int main ()
{
	printf("\nHS_15 - Sortieren mit Funktionszeigern \n\n");
	srand ((unsigned int)time(NULL)); //Zufallzahlen initilisieren
	int *iDaten = (int *) malloc (ANZAHL * sizeof(int));

	if (iDaten != NULL)//Pruefen, ob Platz auf Heap erfolgreich reserviert wurde
	{
		for(int i=0; i<ANZAHL; i++)//
		{
			*(iDaten+1) = rand () % (ANZAHL *100); //
		}
		printf("\n--- VOR dem Sortieren ---\n");
		ausgabe(iDaten, ANZAHL);
		bubble(iDaten, ANZAHL);
		printf("\n--- NACH dem Sortieren ---\n");
		ausgabe(iDaten, ANZAHL);
		free(iDaten);
	}
	else
	{
		printf("Reservierung fehlgeschlagen - FEHLER!");
	}
	return(0);
}

void ausgabe(int *iWerte, int iZahl)  //Ausgeben eines int-Array
{
	for (int i=0; i<iZahl; i++)
	{
		printf("%d\t%d\n", i, iWerte[i]);
	}
}

void bubble (int *iWerte, int iZahl) // Sortieren eines Array
{
	int iFlag;
	do
	{
		iFlag = 0;
		for(int i=0; i<iZahl - 1; i++)
		{
			if(compare_value(iWerte[i],iWerte[i+1])) //Vergleich der Elemente
			{
				//ggf. Tauschen der Elemente
				int iHilf = iWerte[i];
				iWerte[i] = iWerte[i + 1];
				iWerte[i + 1]= iHilf;
				iFlag = 1;
			}
		}
	}
	while (iFlag);
}
void qs(int *iWerte, int iZahl)
{
	
}
int compare_value(int a, int b) //Vergleichfunktion
{
	return(a > b);
}
