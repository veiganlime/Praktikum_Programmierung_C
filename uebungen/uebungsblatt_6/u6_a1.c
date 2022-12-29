#include<stdio.h>

void Modify(int *LocalArray);
int main ()
{

	int Array[10];
	int i;

	for(i=0; i<10; i++)
	{
		Array[i] = i+1;

	}

	for(i=0; i<10; i++)
	{
		Array[i] = i+1;
		printf("Vorher: Inhalte Fuktion MainArray: %i \n", Array[i]);
	}

	//printf("Adresse Main Array: %p \n", &Array[0]);
	Modify(&Array[0]);

	for(i=0; i<10; i++)
	{


		printf("Nachher: Inhalte Fuktion MainArray: %i \n", Array[i]);
	}


	return(0);
}

void Modify(int *LocalArray)
{
	int i;

	for(i=0; i<9; i++)
	{

		LocalArray[i] = LocalArray[i+1];

		printf("Inhalte Funktion LocalArray: %i \n", LocalArray[i]);
		printf("Adresse Local Array: %p \n", &LocalArray[i]);
	}


}
