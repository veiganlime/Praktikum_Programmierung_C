#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Value;
	struct node *Next;
};




int main()
{
	struct node *Head, *Tail;


	Head = (struct node *) malloc(sizeof(*Head));
	Tail = (struct node *) malloc(sizeof(*Tail));

	Head->Next = Tail;
	Tail->Next = Tail;

	printf("Adresse Head->Next: %p \nAdresse Tail->Next: %p \n", Head->Next, Tail->Next);

	free(Tail);
	free(Head);

	return(0);
}//func main


/* Aufgabestellung Head und Tail
Erzeugen Sie eine Liste bestehend aus zwei Knoten: Head und Tail.
Geben Sie die Adressen aus, auf die der Zeiger *Next jeweils zeigt.
Löschen Sie anschließend zuerst Tail und dann Head*/
