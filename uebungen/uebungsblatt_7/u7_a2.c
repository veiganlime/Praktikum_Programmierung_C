#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Value;
	struct node *Next;
};

struct node *Head, *Tail;

void  InsertNode(struct node *Zeiger)
{
	int i;
	struct node *ZH;

	for (i=0; i<10; i++)
	{
		//neuen Knoten auf dem Heap erzeugen und Adresse in ZH speichern
		ZH = (struct node *) malloc(sizeof(*ZH));

		//neuen Knoten auf den Knoten HINTER Zeiger zeigen lassen
		ZH->Next = Zeiger->Next;

		//Ersten Knoten, auf den Zeiger zeigt, auf neuen Knoten zeigen lassen
		Zeiger->Next = ZH;

		if (i==0)
		{
			ZH->Value = 100;
		}
		else
		{
			ZH->Value = Zeiger->Value + 100;
		}

		Zeiger = ZH;
	}//Ende for-Schleife
};


void Ausgabe(struct node *Zeiger)
{
	while(Zeiger != Zeiger->Next)
	{
		printf("Adresse Knoten: %p \t Knoten->Next: %p  \t Value: %d \n", Zeiger, Zeiger->Next, Zeiger->Value);

	Zeiger = Zeiger->Next;
	}
}
void Loesche(struct node *Zeiger)
{
	struct node *ZH;
	while(Zeiger != Zeiger->Next)
	{
		ZH = Zeiger->Next;
		free(Zeiger);

		Zeiger = ZH;
	}
	Head->Next = Tail;
}
int main()
{



	Head = (struct node *) malloc(sizeof(*Head));
	Tail = (struct node *) malloc(sizeof(*Tail));

	Head->Next = Tail;
	Tail->Next = Tail;

	Head->Value = -100;
	Tail->Value = -200;

	printf("Adresse Head->Next: %p \nAdresse Tail->Next: %p \n", Head, Tail);

	InsertNode(Head);
	Ausgabe(Head);
	Loesche(Head->Next);

	free(Tail);
	free(Head);

	return(0);
}//func main


/*Aufgabestellung - Liste mit 10 Elementen

Ein Analog-Digital-Konverter gibt je nach Aktivität eines Sensors eine unterschiedliche Anzahl von Werten während einer gleichen Zeiteinheit aus. 
Da daher ein Feldgröße unvortelhaft ist, sollen die Daten in eine verketete Liste verwendet werden.

erzeugen Sie zuerst Head und Tail.
erzeugen Sie eine Liste mit 10 Elementen. Nur bei Erzeugung der Liste darf die konkrete Zahl 10 benutzt werden. Sonst nicht. 
Bei allen anderen Operationen soll das Programm selber feststellen , wie lang die Liste ist.

Neim Erzeugen der Liste soll der erste Knoten mit der Zahl 100 beschrieben werden und jeder weitere Knoten inkrementell mit +100 befüllt werden.

Duechlaufen Sie danach die Liste von vorne und geben alle Elemente aus. Bauen Sie nach Abschluss des Programms die Liste wieder ab. Tail und Head werden zum Schluss
gelöscht.   */
