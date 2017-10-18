#include <stdio.h>

double polekola(double r)
{
	int p=3.14*r*r;
	return p;
}



int main(){
	
	double r;
	scanf("%lf",&r);
	printf("Pole kola wynosi %lf",polekola(r));
	return 0;
}
