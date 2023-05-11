#include<stdio.h>
#include"choix.h"
#include"structure.h"


void ajout_Etudiant() {     // ajout Etudiant
	Etudiant Et;
	FILE * E =fopen("Etudiant.txt","a");
	prinft("NOM : ");
	scanf("%s",Et.nom);
	prinft("PRENOM : ");
	scanf("%s",Et.prenom);
	prinft("AGE : ");
	scanf("%d",&Et.age);
	fprintf(E,"%s\t%s\t%d\n",Et.nom,Et.prenom,Et.age);
	fclose(E);	}

void afficher_Etudiant(){   //Affichage Etudiant
	Etudiant Et;
	FILE *E=fopen("Etudiant.txt","r");
    printf("_____________LA LISTE DES ETUDIANTS_____________\n");
	while(fscanf(E,"%s\t%s\t%d\n",Et.nom,Et.prenom,&Et.age)!=EOF)
	printf("%s\t%s\t%d\n",Et.nom,Et.prenom,Et.age);
	fclose(E);      }

void modifier_Etudiant( ){   //Modification Etudiant
	Etudiant e,Et;
	int n;

	printf("_____________DONNEZ LES INFORMATIONS D'ETUDIANT QUE VOUS VOULEZ MODIFIER____________\n");
	printf(" NOM : ");
	scanf("%s",e.nom);
	printf(" PRENOM : ");
	scanf("%s",e.prenom);
	printf(" AGE : ");
	scanf("%s",&e.age);

	FILE * E=fopen("Etudiant.txt","r");
	FILE * T=fopen("Temporaire","w" );

	while (fscanf(E,"%s\t%s\t%d\n",Et.nom,Et.prenom,Et.age)!=EOF)
{
	if(strcmp(Et.nom,e.nom==0&&Et.prenom,e.prenom==0&&Et.age==e.age))
{
	printf("donnez le champ  que vous voulez modifier");
	printf("1- Nom\n");
    printf("2- Prenom\n");
    printf("3- Age\n");
    scanf("%d", &n);
            if(n == 1){

            {
              printf("Nouveau Nom : ");
              scanf("%s",(Et).nom);
            }
            if(n == 2)
            {
              printf("Nouveau Prenom : ");
              scanf("%s",(Et).prenom);
            }
            if(n == 3)
            {
              printf("Nouveau Age : ");
              scanf("%d",&(Et).age);
            }
            fprintf(T,"%s\t%s\t%d\n",Et.nom,Et.prenom,Et.age);
       }
    else
            fprintf(T,"%s\t%s\t%d\n",e.nom,e.prenom,e.age);
}
    fclose(E);
    fclose(T);
    E = fopen("Etudiant.txt","w");
    T = fopen("Temporaire.txt","r");
    while(fscanf(T,"%s\t%s\t%d\n",e.nom,e.prenom,&e.age)!= EOF)
        fprintf(E,"%s\t%s\t%d\n",e.nom,e.prenom,e.age);
    fclose(E);
    fclose(T);
    remove("Temporaire.txt");
}

void rechercher_Etudiant(){     //Recherche Etudiant
     Etudiant Et,e;
	 FILE * E = fopen("Etudiant.txt", "r");
     printf("____________Donnez les informations d'etudiant recherche____________\n");
	 printf("LE NOM : ");
     scanf("%s\n",Et.nom);
     printf("LE PRENOM :");
     scanf("%s\n",Et.prenom);
     printf("L'AGE :");
     scanf("%d",&Et.age);
     int trouve = 0 ;
 while (fscanf(E,"%s\t%s\t%d\n",Et.nom,Et.prenom,&Et.age)!= EOF)
 {
     //si la ligne est la ligne rechercher
     if (strcmp(e.nom,Et.nom)==0&&strcmp(e.prenom,Et.prenom)==0&&(e.age==&Et.age))
     {
         trouve =1;
         printf("____________LES INFORMATIONS D'ETUDIANT RECHERCHE____________\n"); // alors, on affiche cette ligne sur ecran
         printf("LE NOM : %s\t LE PRENOM : %s\t L'AGE : %d",Et.nom,Et.prenom,Et.age);
     }
     // tester est ce que letudiant recherche existe ou pas !
     else if (trouve ==0)
     {
        printf("l'etudiant n'existe pas\n");
     }
}}
void supprimer_Etudiant(){       //Supression Etudiant
     Etudiant Et,e;
     FILE * E = fopen("Etudiant.txt","r");                //ouvrir trois fichiers : Etudiant, temporaire, archive
     FILE * T = fopen("Temporaire.txt","w");
     FILE * A = fopen("Archive.txt","a");

     //demander le nom de d'etudiant à supprimer à l'utilisateur
     printf("____________Donnez les informations d'etudiant que voulez vous supprimer____________\n");
	 printf("LE NOM : ");
     scanf("%s\n",e.nom);
     printf("LE PRENOM :");
     scanf("%s\n",e.prenom);
     printf("L'AGE :");
     scanf("%d",&e.age);

     int trouve =0 ;

     //lecture du fichier Etudiant, ligne par ligne :
     while (fscanf(E,"%s\t%s\t%d\n",Et.nom,Et.prenom,&Et.age)!=EOF)
 {
     //si la ligne est la ligne à supprimer
     if (strcmp(e.nom,Et.nom)==0&&strcmp(e.prenom,Et.prenom)==0&&(e.age==&Et.age))
     {
         trouve = 1;
         fprintf(A,"%s\t%s\t%d\n",Et.nom,Et.prenom,Et.age); // alors, on archive cette ligne dans le fichier archive.txt
     }
     // sinon, si la ligne n'est pas la ligne à supprimer
     else
     {
        fprintf(T,"%s\t%s\t%d\n", Et.nom, Et.prenom,Et.age);// alors on l enregistre sur le fichier temporaire
     }
     // tester est ce que letudiant à supprimer  existe ou pas !
     if (trouve == 0)
     printf("le nom n'existe pas \n");


     // fermer les trois fichiers : Etudiant, Temporaire, et Archive
     fclose(E);
     fclose(T);
     fclose(A);

     // ouvrir les deux fichiers : Etudiant, temporaire
     E = fopen("Etudiant.txt","w"); // le mode "w" ouvre le fichier personne en supprimant son ancien contenu
     T = fopen("Temporaire.txt","r");

     //lecture du ficher temporaire, ligne par ligne
     while(fscanf(T,"%s\t%s\t%d\n",Et.nom,Et.prenom,&Et.age)!=EOF)
     fprintf(E,"%s\t%s\t%d\n",Et.nom,Et.prenom,Et.age); // ecriture, de chaque ligne lue, sur le fichier etudiant

     //fermeture des fichiers : personne et temporaire et archive
     fclose(E);
     fclose(T);
     fcolse(A);

     //suppression du fichier temporaire.txt
     remove("Temporaire.txt");
}


void quitter_Etudiant() {    // Fonction sortir le programme
	exit (0);
              }



void choix_Etudiant(){        // Fonction choix
		int m;
		printf("_____  ETUDIANT  _____\n");
	    choix1();
	    printf("\n");
	    printf(" donnez votre choix\n");

	do{
	    scanf("%d",&n);
        switch(n)
	      case 1: ajout_Etudiant();
	              break;

		    case 2:afficher_Etudiant();
		          break;

				case 3 :modifier_Etudiant();
                   break;
                   
					case 4:rechercher_Etudiant();
					   break;

						case 5:supprimer_Etudiant();
                            break;

							case 6:quitter_Etudiant();
							   break;
	
   	  }while(n!=1&&n!=2&&n!=3&&n!=4&&n!=5&&n!=6);
   	  
   }

