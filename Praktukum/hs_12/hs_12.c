#include<stdio.h>
#include<stdlib.h>

int main()
{
	double Array[10000];
	int  *Zeiger;
	int i;

	Zeiger = malloc(sizeof(Array[10000]));

	if(Zeiger!=NULL)
	{


		for(i=0; i<10; i++)
		{
			Zeiger[i] = i+1;
			printf("Inhalt von Zeiger: %d \n", Zeiger[i]);
		}
	} else
	{
		printf("Reservierung fehlgescglagen - Fehler!");
	}


//	printf("Inhalt von Zeiger: %d \n", Zeiger[i]);

	free(Zeiger);
	return(0);
}
