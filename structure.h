#include<time.h>


typedef struct Etudiant{    // structure Etudiant
   char nom[20];            // champ 
   char prenom[20];
   int  age;
   }Etudiant;              // nom de structure 
   
   
   typedef struct {   // structure Enseignant
	   char nom[20];
	   char prenom[20];
	   int  age;
	   }Enseignant; 
	   


typedef struct {
	int numero;
	int jour ;
	int mois;
	int annee;
    float montant_paye;	
    float montant_reste;
    float montant_total;
    
}Facture;
