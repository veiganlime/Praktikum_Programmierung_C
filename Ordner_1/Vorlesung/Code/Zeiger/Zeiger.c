#include<stdio.h>
#include<stdlib.h>
int main (int argc, char *argv[]){
	int var;
	int *pointer;
	int *next_pointer;

	pointer = (int *) malloc(sizeof(int));
	next_pointer = (int *) malloc(sizeof(int));

	var = 1;
	*pointer = 2;
	*next_pointer = 3;
	pointer = &var;
	*pointer = 4;
	//var = 5;



	printf("var: %d \n", var);
	printf("*pointer: %d \n", *pointer);
	printf("*next_pointer: %d \n", *next_pointer);









  return (0);	
}
