#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	 
	 char nom[15];
	 char prenom[15];
	 int  age;
	 char sexe[7];
	 int num;
	  printf("donner votre nom :\n");
	  scanf("%s", &nom);
	  printf("donner votre prenom :\n");
	  scanf("%s", &prenom);
	  printf("donner votre age :\n");
	  scanf("%d", &age);
	  printf("donner votre sexe :\n");
	  scanf("%s",&sexe);
	  printf("donner votre num :\n");
	  scanf("%d",&num);
	  printf("ton nom %s ton prenom %s, ton age %d, ton sexe %s, ton num %d ",nom,prenom,age,sexe,num );
	  
	
	  
	 
	return 0;
}
