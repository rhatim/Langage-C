#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int a,b,c,d,somme;
	float moyenne;
	
	    printf("donnez la valeur de a : \n");
	    scanf("%d",&a);
	
		printf("donnez la valeur de b : \n");
	    scanf("%d",&b);
	 
	 	printf("donnez la valeur de c: \n");
	    scanf("%d",&c);
	    
	    printf("donnez la valeur de d : \n");
	    scanf("%d",&d);
	    
	     somme = a + b + c + d ;
	    moyenne = somme / 4;
	    
	    printf("la somme est %d & la moyenne est %.3f \n" ,somme,moyenne);
	    
	    return 0;
	  	
}
