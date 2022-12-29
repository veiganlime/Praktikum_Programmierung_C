#include <stdio.h>
//void Modify(int *ArrayZeiger);
//void Ausgabe;


int main()
{
	float f ;

	f = 3/4;

	printf("%f", f);

return 0;
}




/*int main()
{

	int Array[3][3][3];
	int Counter;
	int i,j,k;

	Counter = 1;
	for(i=0; i<3; i++)
	{

		for(j=0; j<3; j++)
		{

			for(k=0; k<3; k++)
			{
				*(*(*(Array+i)+j)+k) = Counter++;
			}
		}
	}

/*Ausgabe*/
/*
	for(i=0; i<3; i++)
	{

		for(j=0; j<3; j++)
		{

			for(k=0; k<3; k++)
			{
				printf("Array: %d \n", Array[i][j][k]);
			}
		printf("\n");
		}
	printf("\n");
	}


	printf("Array[0][0][5]: %d \n", Array[0][0][5]);
	printf("Array[3][3][10]: %d \n", Array[3][3][10]);

	return(0);
}

*/
/*void Ausgabe()
{
	int i, j, k;

	for(i=0; i<3; i++)
	{
		printf("Erste Elementen %d \n",Array[i][][]);

		for(j=0; j<3; j++)
		{
			printf("Zweite Elementen %d \n",Array[][j][]);

			for(k=0; k<3; k++)
			{
				printf("Dritte Elementen %d \n",Array[][][k]);
			}
		}
	}
}*/
