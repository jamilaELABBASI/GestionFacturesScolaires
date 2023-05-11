#include <stdio.h>
#include <stdlib.h>
#include"structure.h"
#include<time.h>

void ajout_Facture() {     // ajout Facture
	Facture Fa;
	FILE * F =fopen("Facture.txt","a");
	prinft("NUMERO : ");
	scanf("%d",&Fa.numero);
	prinft("JOUR : ");
	scanf("%d",&Fa.jour);
	prinft("MOIS : ");
	scanf("%d",&Fa.mois);
	prinft("ANNE : ");
	scanf("%d",&Fa.annee);
	prinft("MONTANT TOTAL : ");
	scanf("%f",&Fa.montant_total);
	prinft("MONTANT PAYE : ");
	scanf("%f",&Fa.montant_paye);
	prinft("MONTANT RESTE : ");
	scanf("%f",&Fa.montant_reste);
    fprintf(F,"%d\t%d\t%f\t%f\t%f\n",Fa.numero,Fa.jour,Fa.mois,Fa.annee,Fa.montant_total,Fa.montant_paye,Fa.montant_reste);
	fclose(F);	}

void afficher_Facture(){   //Affichage Etudiant
    Facture Fa;
	FILE *F=fopen("Facture.txt","r");
	while(fscanf(F,"%d\t%d\t%d\t%d\t%f\t%f\t%f\n",&Fa.numero,&Fa.jour,&Fa.mois,&Fa.annee,&Fa.montant_total,&Fa.montant_paye,&Fa.montant_reste)!=EOF)
    printf("_____________LA LISTE DES FACTURES_____________\n");
    fprintf(F,"%d\t%d\t%d\t%d\t%f\t%f\t%f\n",Fa.numero,Fa.jour,Fa.mois,Fa.annee,Fa.montant_total,Fa.montant_paye,Fa.montant_reste);
	fclose(F);      }

void modifier_Facture(){   //Modification Facture
	int n;
	Facture Fa,f; 

	printf("_____________SAISIEZ LE CHAMP DE LA FACTURE QUE VOUS VOULEZ MODIFIER____________\n");
	printf(" NUMERO : ");
	
	FILE * F=fopen("Facture.txt","r");
	FILE * T=fopen("Temporaire","w" );

   while(fscanf(F,"%d\t%d\t%d\t%d\t%f\t%f\t%f\n",Fa.numero,Fa.jour,Fa.mois,Fa.annee,Fa.montant_total,Fa.montant_paye,Fa.montant_reste)!=EOF)
// lecture tout les info
	if(strcmp(&(Fa).numero,f.numero))
	printf("donnez le champ que vous voulez modifier");
	printf("1- NUMERO \n");
    printf("2- JOUR \n");
    printf("2- MOIS \n");
    printf("2- ANNEE \n");
    printf("3- MONTANT TOTAL \n");
    printf("4- MONTANT PAYE \n");
    printf("5- MONTANT RESTE \n");
do{
    printf("donnez le numero \n");
    scanf("%d", &n);
            if(n == 1){
            
              printf("Nouveau Numero : ");
              scanf("%d",&Fa.numero);
            }
            if (n == 2)
            {
              printf("Nouveau JOUR : ");
              scanf("%d",&Fa.jour);
            }
            if(n == 3)
            {
              printf("Nouveau JOUR : ");
              scanf("%d",&Fa.mois);
            }
            if(n == 4)
            {
              printf("Nouveau JOUR : ");
              scanf("%d",&Fa.annee);
            }
            if(n == 5)
            {
              printf("Nouveau Montant Total : ");
              scanf("%f",&Fa.montant_total);
            }
            if(n == 6)
            {
			prinft("MONTANT PAYE : ");
			scanf("%f",&Fa.montant_paye);
		    }
			if(n == 7)
            {
			prinft("MONTANT RESTE : ");
			scanf("%f",&Fa.montant_reste);
            }
        fprintf(F,"%d\t%d\t%d\t%d\t%f\t%f\t%f\n",Fa.numero,Fa.jour,Fa.mois,Fa.annee,Fa.montant_total,Fa.montant_paye,Fa.montant_reste);
} while(n!=1&&n!=2&&n!=3&&n!=4&&n!=5&&n!=6&&n!=7);
    fclose(F);
    fclose(T);
    
    F = fopen("Facture.txt","w");
    T = fopen("Temporaire.txt","r");
 while (fscanf(F,"%d\t%d\t%d\t%d\t%f\t%f\t%f\n",&Fa.numero,&Fa.jour,&Fa.mois,&Fa.annee,&Fa.montant_total,&Fa.montant_paye,&Fa.montant_reste)!=EOF)
        fprintf(F,"%d\t%d\t%f\t%f\t%f\n",Fa.numero,Fa.jour,Fa.mois,Fa.annee,Fa.montant_total,Fa.montant_paye,Fa.montant_reste);
    fclose(F);
    fclose(T);
    remove("Temporaire.txt");
}

void rechercher_Facture(){     //Recherche Etudiant
     Facture Fa,f;
	 FILE * F = fopen("Facture.txt", "r");
     printf("____________Donnez les informations d'etudiant recherche____________\n");
	 printf("LE NUMERO : ");
     scanf("%d\n",&Fa.numero);
     printf("LE JOUR :");
     scanf("%d\n",&Fa.jour);
      printf("LE MOIS :");
     scanf("%d\n",&Fa.mois);
      printf("LE ANNEE :");
     scanf("%d\n",&Fa.mois);
     prinft("MONTANT TOTAL : ");
	 scanf("%f",&Fa.montant_total);
	 prinft("MONTANT PAYE : ");
	 scanf("%f",&Fa.montant_paye);
	 prinft("MONTANT RESTE : ");
	 scanf("%f",&Fa.montant_reste);

     int trouve = 0;
 while (fscanf(F,"%d\t%d\t%d\t%d\t%f\t%f\t%f\n",&Fa.numero,&Fa.jour,&Fa.mois,&Fa.annee,&Fa.montant_total,&Fa.montant_paye,&Fa.montant_reste)!=EOF)
 {

     //si la ligne est la ligne rechercher
     if (strcmp(f.numero,Fa.numero)==0)
     {
         trouve = 1;
         printf("____________LES INFORMATIONS DE LA FACTURE RECHERCHE____________\n"); // alors, on affiche cette ligne sur ecran
         printf("LE NUMERO : %d\t LA DATE : %d\t LE MONTANT TOTAL : %f\t LE MONTANT PAYE : %f\t LE MONTANT RESTE : %f ",Fa.numero,Fa.jour,Fa.mois,Fa.annee,Fa.montant_total,Fa.montant_paye,Fa.montant_reste);
     }
     // tester est ce que la facture recherche existe ou pas !
     else if (trouve ==0)
     {
        printf("la facture n'existe pas \n");
     }
}}
void supprimer_Facture(){       //Supression Facture
    Facture Fa,f;
     FILE * F = fopen("Facture.txt", "r");                //ouvrir trois fichiers : Facture, temporaire, archive
     FILE * T = fopen("Temporaire.txt", "w");
     FILE * A = fopen("Archive.txt", "a");

     //demander les info  de la facture à supprimer à l'utilisateur
     printf("____________Donnez les informations d'etudiant que voulez vous supprimer____________\n");
	 printf("LE NUMERO : ");
     scanf("%d\n",f.numero);
     
     int trouve = 0;

     //lecture du fichier Facture, ligne par ligne :
 while (fscanf(F,"%d\t%d\t%d\t%d\t%f\t%f\t%f\n",&Fa.numero,&Fa.jour,&Fa.mois,&Fa.annee,&Fa.montant_total,&Fa.montant_paye,&Fa.montant_reste)!=EOF)
 {

     //si la ligne est la ligne à supprimer
     if (strcmp(f.numero,&Fa.numero)==0)
  
	 {
         trouve=1;
         fprintf(F,"%d\t%d\t%d\t%d\t%f\t%f\t%f\n",Fa.numero,Fa.jour,Fa.mois,Fa.annee,Fa.montant_paye,Fa.montant_reste,Fa.montant_total); // alors, on archive cette ligne dans le fichier archive.txt
     }
     // sinon, si la ligne n'est pas la ligne à supprimer
     else
     {
        fprintf(T,"%d\t%d\t%d\t%d\t%f\t%f\t%f\n",Fa.numero,Fa.jour,Fa.mois,Fa.annee,Fa.montant_paye,Fa.montant_reste,Fa.montant_total);// alors on l enregistre sur le fichier temporaire
     }
  
     // tester est ce que la facture à supprimer  existe ou pas !
     if (trouve==0)
     printf("la facture n'existe pas \n");


     // fermer les trois fichiers : Facture, Temporaire, et Archive
     fclose(F);
     fclose(T);
     fclose(A);

     // ouvrir les deux fichiers : Facture, temporaire
     F = fopen("Facture.txt","w"); // le mode "w" ouvre le fichier personne en supprimant son ancien contenu
     T = fopen("Temporaire.txt","r");

     //lecture du ficher temporaire, ligne par ligne
     while(fscanf(T,"%d\t%d\t%d\t%d\t%f\t%f\t%f\n",&Fa.numero,&Fa.jour,&Fa.mois,&Fa.annee,&Fa.montant_total,&Fa.montant_paye,&Fa.montant_reste)!=EOF)
     fprintf(T,"%d\t%d\t%d\t%d\t%f\t%f\t%f\n",Fa.numero,Fa.jour,Fa.mois,Fa.annee,Fa.montant_paye,Fa.montant_reste,Fa.montant_total);// alors on l enregistre sur le fichier temporaire
 // ecriture, de chaque ligne lue, sur le fichier etudiant

     //fermeture des fichiers : personne et temporaire et archive
     fclose(F);
     fclose(T);
     fcolse(A);

     //suppression du fichier temporaire.txt
     remove("Temporaire.txt");
}}


void quitter_Facture() {    // Fonction sortir le programme
	 exit(0);
              }




void choix_Facture(){        // Fonction choix
		int n;
		printf("_____  FACTURE  _____\n");
	    choix1();
	    printf("\n");
	printf(" donnez votre choix\n");
	do {
	    scanf("%d",&n);
        if (n==1)
        	ajout_Facture();  
		
		else if (n==2)
			afficher_Facture(); 
		
		else if (n==3)
		    modifier_Facture(); 
		
		else if (n==4)
			 supprimer_Facture(); 
		
		else 
		     quitter_Facture(); 
		
}while(n!=1&&n!=2&&n!=3&&n!=4&&n!=5);
}
		
   	  
