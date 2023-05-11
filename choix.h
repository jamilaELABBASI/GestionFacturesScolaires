#include"Etudiant.c"
#include"Enseignant.c"
#include"Facture.c"


void menu(){   
    int n;
    printf(" _____  APPLICATION DE GESTION D'UNE ECOLE  _____\n  ");
	printf("1- ETUDIANT\n");
	printf("2- ENSEIGNANT\n");
	printf("3- FACTURE");
	printf("\n");
    printf("donnez votre choix");
	do{
			scanf("%d",&n);
			if(n==1)
				{
				choix1();
				printf("\n");
				choix_Etudiant();
		    	}
				
			else if(n==2)
				{
				choix1();
				printf("\n");
				choix_Enseigant();
		    	}
				
			else if(n==3)
				{
				choix1();
				printf("\n");
				choix_Fature();
			}
	}while(n!=1&&n!=2&&n!=3);
}

void choix1(){
	printf("1- AJOUTER\n");   
	printf("2- AFFICHER\n");
	printf("3- MODIFIER\n");
	printf("4- RECHERCHER\n");
	printf("5- SUPPRIMER\n");
	printf("6- QUITTER\n");
	     }
	


