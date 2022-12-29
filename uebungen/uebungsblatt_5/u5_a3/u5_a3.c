#include<stdio.h>
#include<stdlib.h>


int  Sub1(int *Z1, int*Z2);
void Sub2(int *Z1, int*Z2, int *Z3);

int main()
{
	int a, b;
	int c;

	a = 2;
	b = 3;

	c = Sub1(&a,&b);
	printf("Sub1: a: %d  b: %d c: %d \n", a, b, c);

	Sub2(&a, &b, &c);
	printf("Sub2: a: %d  b: %d c: %d \n", a, b, c);

	return(0);
}

int Sub1(int *Z1, int*Z2)
{
	return(*Z1-*Z2);
}


void Sub2(int *Z1, int *Z2, int *Z3)
{
	*Z3 = *Z1 - *Z2;

}
