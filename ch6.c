#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float f,c;
	printf("entrez la temperature en fahrenheit");
	scanf("%f",&f);
	c = (f-32)/1.8;
	printf("c = (F-32)/1.8 = %.2f",c);
	return 0;
	
	
}

