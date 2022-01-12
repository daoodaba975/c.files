//	Daouda BA

/*	Créateur de projet WEB type MVC (Model Vue Controler).	*/

//	DEBUT du programme..

//	Inclusion des bibliothèques
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "dir.h"

//	Définition des constantes
#define N puts(""); // retour à la ligne
#define Z Sleep(0750); // temps d'attente (0.75 seconde)
#define B printf("\a"); // bip sonore
#define S system("cls"); // effacer l'écran
#define F fflush(stdin); // vidage de buffer
#define P system("pause"); // pause avant de continuer

main()
{
	 int choix;
	 char name;
	 FILE *C;
	 MENU:
	 S
	 N
	 system("color 0F");
	 printf("\n\t\t |----------------------------------------------|\n");
	 printf("\t\t |-------->  WEB PROJECT  <>  CREATOR  <--------|\n");
	 printf("\t\t |----------------------------------------------|\n");
	 printf("\t\t |\t\t\t\t\t\t|\n");
	 printf("\t\t |\t\t\t\t\t\t|\n");
	 
	 printf("\t\t |      1 ---->   CREER UN NOUVEAU PROJET\n");
	 N
	 printf("\t\t |        2 ---->   QUITTER LE PROGRAMME\n");
	 
	 printf("\t\t |\t\t\t\t\t\t|\n");
	 printf("\t\t |\t\t\t\t\t\t|\n");
	 printf("\t\t |----------------------------------------------|\n");
	 printf("\t\t |------------>  DAOUDA  </>  BA  <-------------|\n");
	 printf("\t\t |----------------------------------------------|\n");
	 
	 do{
		 	 printf("\n\t\t FAITES VOTRE CHOIX ?\t : ");
		 	 scanf("%d",&choix);
			 }while(choix<1 || choix>2);
	 switch(choix){
	 	 // Menu : CREER UN NOUVEAU PROJET
		 case 1 :
			 system("color 0E");
		 	 S
		 	 N
		 	 printf("\t|-------  ENTRER LE NOM DE VOTRE PROJET  : ");
		 	 F
		 	 scanf("%s",&name);
		 	 
		 	 // Dossier principale
		 	 mkdir("./WEB-PROJET");
		 	
		 	 // Création des dossiers index
			 mkdir("WEB-PROJET./model");
		 	 mkdir("WEB-PROJET./view");
		 	 mkdir("WEB-PROJET./controller");
		 	 
    		 // Création des fichiers
			 C=fopen("WEB-PROJET//view//index.html","w");
    		 C=fopen("WEB-PROJET//view//style.css","w");
    		 C=fopen("WEB-PROJET//view//script.js","w");
    		 
    		 N
    		 printf("\t|-------  VOTRE DOSSIER A ETE CREE AVEC SUCCES\n");
    		 printf("\t|-------  VOUS POUVEZ QUITTER LE PROGRAMME POUR VOIR\n");
    		 printf("\t|-------  L'ARCHITECTURE DE VOTRE PROJET ET VOIR LES FICHIERS CREE");
    		 
    		 fclose(C);
    		 N
    		 N
    		 P
    		 goto MENU;
	 	 	 break;
	 	 	 
	 	 // Menu : QUITTER LE PROGRAMME
		 case 2 :
		 	 system("color 04");
	 	 	 S
			 char q;
			 Z
			 do{
			 puts("Voulez vous vraiment quitter le programme ?");
			 printf("(O/o) ='OUI' <----> (N/n) ='NON'\n : ");
			 F
			 scanf("%c",&q);
			 }while(q!=79 && q!=111 && q!=78 && q!=110);
			 if(q==79 || q==111){
		 	 S
		 	 system("color 0F");
		 	 B
		 	 printf("  ----------------------------------------------------------------------------\n");
			 printf("  |                                                                          | \n");
			 printf("  |                               A  BIENTOT                                 |\n");
			 printf("  |                                                                          | \n");
			 printf("  ----------------------------------------------------------------------------\n");
			 }
			 if(q==78 || q==110){
		 	 goto MENU;
			 }
	 	 	 break;
		 }
}
