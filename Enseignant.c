#include<stdio.h>
#include<stdlib.h>
#include"structure.h"
#include"choix.h"


void ajout_Enseignant(){     // ajout Enseignant
	Enseignant En;
	FILE * E =fopen("Enseignant.txt","a");
	prinft("NOM : ");
	scanf("%s",En.nom);
	prinft("PRENOM : ");
	scanf("%s",En.prenom);
	prinft("AGE : ");
	scanf("%d",&En.age);
	fprintf(E,"%s\t%s\t%d\n",En.nom,En.prenom,En.age);
	fclose(E);	}

void afficher_Enseignant(){   //Affichage Enseignant
	Enseignant En;
	FILE *E=fopen("Enseignant.txt","r");
	while(fscanf(E,"%s\t%s\t%d\n",En.nom,En.prenom,En.age)!=EOF)
    printf("_____________LA LISTE DES ETUDIANTS_____________\n");
	printf("%s\t%s\t%d\n",En.nom,En.prenom,En.age);
	fclose(E);      }

void modifier_Enseignant(){   //Modification Enseignant
		Enseignant En,e;
	int n;

	printf("_____________DONNEZ LES INFORMATIONS D'ETUDIANT QUE VOUS VOULEZ MODIFIER____________\n");
	printf(" NOM : ");
	scanf("%s",e.nom);
	printf(" PRENOM : ");
	scanf("%s",e.prenom);
	printf(" AGE : ");
	scanf("%s",&e.age);

	FILE * E=fopen("Enseignant.txt","r");
	FILE * T=fopen("Temporaire","w");

	while (fscanf(E,"%s\t%s\t%d\n",En.nom,En.prenom,En.age)!=EOF)
	if(strcmp((En.nom,e.nom==0&&En.prenom,e.prenom==0&&En.age==e.age))
	printf("donnez le numero que vous voulez modifier\n");
	printf("1- Nom\n");
    printf("2- Prenom\n");
    printf("3- Age\n");
    scanf("%d",&n);
            if(n == 1){
            {
              printf("Nouveau Nom : ");
              scanf("%s",&(*En).nom);
            }
            if(n == 2)
            {
              printf("Nouveau Prenom : ");
              scanf("%s",&(*En).prenom);
            }
            if(n == 3)
            {
              printf("Nouveau Age : ");
              scanf("%d",&(*En).age);
            }
            fprintf(T,"%s\t%s\t%d\n",Et.nom,Et.prenom,Et.age);
           }
      else 
            fprintf(T,"%s\t%s\t%d\n",En.nom,En.prenom,En.age);
}
    fclose(E);
    fclose(T);
    E = fopen("Enseignant.txt","w");
    T = fopen("Temporaire.txt","r");
    while(fscanf(T, "%s\t%s\t%d\n",e.nom,e.prenom,&e.age)!=EOF)
        fprintf(E,"%s\t%s\t%d\n",e.nom,e.prenom,e.age);
    fclose(E);
    fclose(T);
    remove("Temporaire.txt");
}

void rechercher_enseignant(){     //Recherche Enseignant
     Etudiant En,e;
	 FILE * E = fopen("Enseignant.txt","r");
     printf("____________Donnez les informations d'Enseignant recherche____________\n");
	 printf("LE NOM : ");
     scanf("%s\n",En.nom);
     printf("LE PRENOM :");
     scanf("%s\n",En.prenom);
     printf("L'AGE :");
     scanf("%d",&En.age);
     int trouve = 0 ;
 while (fscanf(E,"%s\t%s\t%d\n",En.nom,En.prenom,&En.age)!=EOF)
 {

     //si la ligne est la ligne rechercher
     if (strcmp(e.nom, En.nom)==0&&strcmp(e.prenom, En.prenom)==0&&(e.age== &En.age))
     {
         trouve = 1;
         printf("____________LES INFORMATIONS D'ENSEIGNANT RECHERCHE____________\n"); // alors, on affiche cette ligne sur ecran
         printf("LE NOM : %s\t LE PRENOM : %s\t L'AGE : %d",En.nom,En.prenom,En.age);
     }
     // tester est ce que lenseignant recherche existe ou pas !
     else if (trouve ==0)
     {
        printf("l'Enseignant n'existe pas \n");
     }
}
void supprimer_Etudiant(){       //Supression Etudiant
     Etudiant En,e;
     FILE * E = fopen("Enseignant.txt","r");                //ouvrir trois fichiers : enseignant, temporaire, archive
     FILE * T = fopen("Temporaire.txt","w");
     FILE * A = fopen("Archive.txt","a");

     //demander le nom de d'enseignant à supprimer à l'utilisateur
     printf("____________Donnez les informations d'enseignant que voulez vous supprimer____________\n");
	 printf("LE NOM : ");
     scanf("%s\n",e.nom);
     printf("LE PRENOM :");
     scanf("%s\n",e.prenom);
     printf("L'AGE :");
     scanf("%d",&e.age);

     int trouve = 0;

     //lecture du fichier Enseignant, ligne par ligne :
     while (fscanf(E, "%s\t%s\t%d\n",Et.nom,Et.prenom,&Et.age)!=EOF )
 {

     //si la ligne est la ligne à supprimer
     if (strcmp(e.nom,En.nom)==0&&strcmp(e.prenom,En.prenom)==0&&(&e.age==&En.age))
     {
         trouve = 1 ;
         fprintf(A,"%s\t%s\t%d\n",En.nom,En.prenom,En.age); // alors, on archive cette ligne dans le fichier archive.txt
     }
     // sinon, si la ligne n'est pas la ligne à supprimer
     else
     {
        fprintf(T,"%s\t%s\t%d\n",En.nom,En.prenom,En.age);// alors on l enregistre sur le fichier temporaire
     }
     // tester est ce que lEnseignant à supprimer  existe ou pas !
     if (trouve == 0)
     printf("le nom n'existe pas \n");


     // fermer les trois fichiers : Enseignant, Temporaire, et Archive
     fclose(E);
     fclose(T);
     fclose(A);

     // ouvrir les deux fichiers : Enseignant, temporaire
     E = fopen("Enseignant.txt","w"); // le mode "w" ouvre le fichier personne en supprimant son ancien contenu
     T = fopen("Temporaire.txt","r");

     //lecture du ficher temporaire, ligne par ligne
     while(fscanf(T,"%s\t%s\t%d\n",En.nom,En.prenom,&En.age)!=EOF)
     fprintf(E,"%s\t%s\t%d\n",En.nom,En.prenom,En.age); // ecriture, de chaque ligne lue, sur le fichier etudiant

     //fermeture des fichiers : personne et temporaire et archive
     fclose(E);
     fclose(T);
     fcolse(A);

     //suppression du fichier temporaire.txt
     remove("Temporaire.txt");
}


void quitter_Enseignant() {    // Fonction sortir le programme
	 exit (0);
              }



void choix_Enseignant(){        // Fonction choix
		int n;
		printf("_____  ENSEIGNANT  _____\n");
	    choix1();
	    printf("\n");
	printf(" donnez votre choix\n");
	do{
	    scanf("%d",&n);
        switch(n)
	      case 1: ajout_Enseignant();
	              break;

		    case 2:afficher_Enseignant();
		          break;

				case 3 :modifier_Enseignant();
                   break;
                   
					case 4:rechercher_Enseignant();
					   break;

						case 5:supprimer_Enseignant();
                            break;

							case 6:quitter_Enseignant();
							   break;
	
   	  }while(n!=1&&n!=2&&n!=3&&n!=4&&n!=5&&n!=6);
}
