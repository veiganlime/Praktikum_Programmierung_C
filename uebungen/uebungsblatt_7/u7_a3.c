#include<stdio.h>
#include<stdlib.h>

//#include"u7_a3.h"
/*Deklaration der Funktionen*/
void DatenAusgabe(int KnotenNummer);
void ListeAbbauen();

//Deklaration der Struktur Knoten, ohne, dass Speicherplatz an irgendeiner Stelle resserviert wird
struct Knoten
{
	int A;
	int B;
	struct Knoten *Next;
};

//globale  Definition der Zeiger * Head und *Tail fuer alle Funktionen
struct Knoten *Head;
struct Knoten *Tail;

void ListeAbbauen()
{
	struct Knoten *HilfsZeiger1;
	struct Knoten *HilfsZeiger2;
	int i;

	/*AbbauZeiger zeigt zuerst auf den Knoten Head*/
	HilfsZeiger1 = Head;
	HilfsZeiger2 = Head;

	for(i=0; i<5; i++)
	{
		/*Dann Zeiget er auf den naechsten Knoten*/
		HilfsZeiger1 = HilfsZeiger2->Next;
		HilfsZeiger2->Next = HilfsZeiger1->Next;

		free(HilfsZeiger1);
		DatenAusgabe(-1);
	}
}
void DatenAusgabe(int KnotenNummer)
{
	struct Knoten *HilfsZeiger;
	int Counter;

	HilfsZeiger = Head;

	Counter = 1;

	while (HilfsZeiger != HilfsZeiger->Next)
	{
		if(KnotenNummer == Counter  || KnotenNummer == -1)
		{
			printf("Ausgabe A: %d \n", HilfsZeiger->A);
			printf("Ausgabe B: %d \n", HilfsZeiger->B);
		}

	HilfsZeiger = HilfsZeiger->Next;
	Counter ++;

	}
	if (KnotenNummer == Counter || KnotenNummer == -1)
	{
	printf("Ausgabe A: %d \n", HilfsZeiger->A);
	printf("Ausgabe B: %d \n", HilfsZeiger->B);
	}
}


void DatenEintraege()
{
	struct Knoten *HilfsZeiger;
	int Counter;
	int i;

	HilfsZeiger = Head;

	Counter = 9;

	for(i=0; i<5; i++)
	{
		HilfsZeiger = HilfsZeiger->Next;
		Counter = Counter +1;
		HilfsZeiger->A = Counter;
		printf("KnotenDaten A: %d \n", HilfsZeiger->A);

		Counter = Counter +1;
		HilfsZeiger->B = Counter;
		printf("KnotenDaten B: %d \n", HilfsZeiger->B);
	}
}

void ErzeugenNeuenKnoten()
{
	struct Knoten *HilfsZeiger1;
	struct Knoten *HilfsZeiger2;
	int i;

	HilfsZeiger2 = Head;

	for (i=0; i<5; i++)
	{
		HilfsZeiger1 = (struct Knoten *) malloc(sizeof(HilfsZeiger1));

		HilfsZeiger1->Next = Tail;
		HilfsZeiger2->Next = HilfsZeiger1;

		//printf("HilfsZeiger2: %p \n HilfsZeiuger1 %p \n HilfsZeiger1->Next %p \n", HilfsZeiger2, HilfsZeiger1, HilfsZeiger1->Next);
		//printf("Head: %p Tail %p \n", Head, Tail);
		//printf("Head->Next: %p \n", Head->Next);

		HilfsZeiger2 = HilfsZeiger1;
		//printf("HilfsZeiger2: %p \n", HilfsZeiger2);
	}

}

int main()
{
	Head = (struct Knoten *) malloc(sizeof(*Head));
	Tail = (struct Knoten *) malloc(sizeof(*Tail));

	Head->A = -100;
	Head->B = -200;
	Tail->A = -100;
	Tail->B = -200;

	Head->Next = Tail;
	Tail->Next = Tail;

	printf("\n");
	printf("Head: %p \n", Head);
	printf("Tail: %p \n", Tail);

	printf("Head->Next: %p \n", Head->Next);
	printf("Tail->Next: %p \n", Tail->Next);

	ErzeugenNeuenKnoten();

	DatenEintraege();

	printf("Konkreten Knoten Ausgeben \n");
	DatenAusgabe(5);
	printf("\n");

	printf("Kontrolle beim ListeAbbau \n");
	ListeAbbauen();

	free(Head);
	free(Tail);

	return(0);
}

/*Aufgabestellung - Bestimmten Knoten ausgeben

Erzeugne Sie eine Liste bestehend aus zwei Knoten: Head, Tail und 5 weiteren Knoten
Fuellen Sie die Knoten mit  den Werten 10, 11 ..
Lassen Sie eine Ausgabefunktion durch die Liste laufen und übergeben Sie dieser Liste eine Knotennummer, die ausgegeben werden soll.

Bauen Sie die Liste zum Schluss korrekt ab. */
