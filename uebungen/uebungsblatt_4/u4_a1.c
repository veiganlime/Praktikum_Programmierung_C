#include<stdio.h>

/*int main (){
	int i, j;
	i = 7;
	j = -12;

	i = i<<1;
	j = j >>1;
	printf("i: %d j: %d \n", i, j);
	
	i = i >>2;
	j = j <<2;
	printf("i: %d j: %d \n", i, j);
	
	i = j |  6;
	j = j | -3;;
	printf("i: %d j: %d \n", i, j);
	
	i = ~i;
	j = j << 1;
	printf("i: %d j: %d \n", i, j);
	
	i = j >> 1;
	j = i << 1;
	printf("i: %d j: %d \n", i, j);
	
	i = ~i;
	j = i & 5;
	printf("i: %d j: %d \n", i, j);
	
	i = i ^ 3;
	j = j ^ 9 ;
	printf("i: %d j: %d \n", i, j);
	
	i = i | 5;
	j = i ^ 10;
	printf("i: %d j: %d \n", i, j);





  return(0);
}*/
int main (){
	int a;
	int b,c;

	a = -8;
	b = -4 ;
	//a = ((b|6)<<2)&4; 
	a = (b&a)|(b^a);

		printf("a ist: %d \n", a);
		//printf("%d %d \n", a[i], b[i]);
	

	return(0);
}

/*int main (){


	int Array[3] = {1,2,3};
	printf("erg %p \n", Array);
return(0);
}*/




/*int main (){
	
	int a[10];
	int b[10];
	int i, sum;

	sum = 0;
	for(i=0;i<8;i++){
		a[i] = i*i-2;
		b[i] = a[i]*i;
		sum +=a[i] + b[i];
		printf("%d %d \n", a[i], b[i]);
		printf("sum ist %d \n", sum);	
	}







	return(0);
}*/
