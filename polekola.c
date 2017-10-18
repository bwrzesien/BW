#include <stdio.h>

double pole(double r)
{
	int p=3.14*r*r;
	return p;
}



int main(){
	
	double r;
	scanf("%lf",&r);
	printf("Pole kola wynosi %lf",pole(r));
	return 0;
}
