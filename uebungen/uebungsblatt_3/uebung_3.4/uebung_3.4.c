
#include<stdio.h>
#include<math.h>

double quad(double v){
	
	double ergebnis = 0.0;
	ergebnis = v*v;

	return(ergebnis);


}
int main (){
	
	double value_sin, value_cos;
	double argument;
	double ergebnis_quad_cos;
	double ergebnis_quad_sin;
	double Increment = 0.001;
	int i, Counter;
	
	argument = 0.0;

	Counter = (int) (2.0 * M_PI / Increment );
	for (i=0; i<=Counter; i++){
	
		value_cos = cos(argument);
		value_sin = sin(argument);
		
		ergebnis_quad_cos = quad(value_cos);
		ergebnis_quad_sin = quad(value_sin);
		
		printf("arg: %f  cos: %f  sin: %f  quad_cos:%f quad_sin: %f\n",argument, value_cos, value_sin, ergebnis_quad_cos, ergebnis_quad_sin);
		

		argument = argument + Increment;


	}

		printf("Counter %d\n", Counter);






  return(0);
}
