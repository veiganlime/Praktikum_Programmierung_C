
#include<stdio.h>

/*main programm*/
int main(void){

		
	/*Declaration und Definition*/
	float a;
	float b;
	float c;
	int d;
	int e;
	int f;
	/*Initialization*/
	a = 1.0;
	b = 2.0;
	c = a + b;

	d = 1;
	e = 2;
	f = d + e;


	printf("\n");
	printf("Ergebnis von a + b (mit Rundung)  = %1.2f \n " ,c);
	printf("Ergebnis von a + b = %f \n " ,c);
	printf("\n");


	
	printf("Ergebnis von d + e = %d \n " ,f);
	
	return(0);






}
