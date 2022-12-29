
#include<stdio.h>

/*main program*/
int main (void){
	/*Declaration und Definition*/
	int a;
	int b;
	int c;

	/*Initialization*/
	/*Dezimal 0x1A = 26*/
	a = 0x1A;
	b = 3;
	c = a + b;

	printf("\n");
	printf("Ergebnis von a + b = %d \n", c);
	printf(" a  = %d \n", a);
	printf(" a  = 0x%x \n", a);
	printf(" b  = %d \n", b);
	printf(" b  = 0x%x \n", b);
	printf("Ergebnis von a + b = 0x%x \n", c);
	printf("\n");

	return(0);


}
