#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float M,m,km;
int main()
{
	printf("entrez la distance en mile : \n");
	scanf("%f",&M);
	 km = M/1.609;
	 m=1000*km;
	 
	 printf("la distance en metre est :%.3f",m);
	 return 0;
	 
	 
}
