#include<stdio.h>
void zaehlen(){
	 
	static int a = 10;
	 int b = 10;
	//a = 10;
	//b = 10;
	b++;
	a +=1;
	printf("Variable a(static) ist: %d Variable(non-static) b ist: %d \n", a, b);
	}

int main (){
	int i;
	
	for (i = 0; i <10; i++){
		
		
		zaehlen();
		
	}
	


  return(0);
}
