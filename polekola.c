#include <stdio.h>

double pole(double r)
{
	int p=3.14*r*r;
	return p;
}



int main(){
	
	double r;
	scanf("%lf",&r);
	printf("Pole kwadrat wynosi %lf",pole(r));
	printf("x");
	return 0;
}
