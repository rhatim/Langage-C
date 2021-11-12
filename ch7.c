#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a,b,R1,R2,R3,R4,R5;
	
	printf("donnez la valeur a");
	scanf("%d",&a);
	
	printf("donnez la valeur b");
	scanf("%d",&b);
	
	R1=a+b;
	R2=a-b;
	R3=a*b;
	R4=a/b;
	R5=a%b;
	
	printf("a+b=%d \n ",R1);
	printf("a-b=%d \n ",R2);
	printf("a*b=%d \n ",R3);
	printf("a/b=%d \n ",R4);
	printf("a%b=%d \n ",R5);
	
	return 0;	
}
