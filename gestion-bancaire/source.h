//	Daouda BA

//	DEBUT du programme..

//	Ajout des bibliothèques
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

//	Définition des constantes
#define N puts(""); // retour à la ligne
#define Z Sleep(0750); // temps d'attente (0.75 seconde)
#define B printf("\a"); // bip sonore
#define S system("cls"); // effacer l'écran
#define F fflush(stdin); // vidage de buffer
#define P system("pause"); // pause avant de continuer

//	Définition de la structure CLIENT
typedef struct{
     char num[8],cni[14],tel[9],nom[10],prenom[20];
	 char numc[8],rech[8],numtest[8],ncni[14];
}CLIENT;

//	Définition de la structure COMPTE
typedef struct{
	 char numc;
	 int solde,etat;
}COMPTE;

//	Définition de la structure OPERATION
typedef struct{
	 int montant,last;
	 int compte;
	 char nump,type,heure,numop[8];
}OPERATION;

//  Variable globale
	 CLIENT cli;
	 COMPTE cpt;
	 OPERATION opt;
	 int somme;
	 int cptN,cptO;
	 int taille,taille2,taille3;

//	Fonction Génératrice du Numéro de COMPTE
void GENERATEUR_NUM_COMPTE(){
		 cptN++;
    	 sprintf(cli.num,"BB%05d",cptN);
}

//	Fonction Génératrice du Numéro de OPERATION
void GENERATEUR_NUM_OPERATION(){
		 cptO++;
    	 sprintf(opt.numop,"OP%03d",cptO);
}

//	Menu Principale
void MENU_PRINCIPALE(){
	 int choix,choix2,choix3;

	 // Etiquette Menu Principale
	 MENU:
	 S
	 system("color 0F");
	 printf("\n\t\t |----------------------------------------------|\n");
	 printf("\t\t |--------->  GESTION  </>  BANCAIRE  <---------|\n");
	 printf("\t\t |----------------------------------------------|\n");
	 printf("\t\t |\t\t\t\t\t\t|\n");
	 Z
	 system("color 0E");
	 printf("\n\t\t |\t 1 ---->	CREATION COMPTE\n");
	 Z
	 system("color 02");
	 printf("\t\t |\t 2 ---->	RECHERCHER COMPTE\n");
	 Z
	 system("color 06");
	 printf("\t\t |\t 3 ---->	AFFICHER COMPTE\n");
	 Z
	 system("color 0B");
	 printf("\t\t |\t 4 ---->	OPERATION COMPTE\n");
	 Z
	 system("color 0D");
	 printf("\t\t |\t 5 ---->	AFFICHAGE OPERATION\n");
	 Z
	 system("color 0C");
	 printf("\t\t |\t 6 ---->	FERMETURE COMPTE\n");
	 Z
	 system("color 04");
	 printf("\t\t |\t 7 ---->	QUITTER\n\n");
	 system("color 0F");
	 printf("\t\t |\t\t\t\t\t\t|\n");
	 printf("\t\t |----------------------------------------------|\n");
	 printf("\t\t |------------>  DAOUDA  </>  BA  <-------------|\n");
	 printf("\t\t |----------------------------------------------|\n");
	 Z
			 do{
		 	 printf("\n\t\t FAITES VOTRE CHOIX ?\t : ");
		 	 scanf("%d",&choix);
			 }while(choix<1 || choix>7);
	 switch(choix){	 	
	 	 // Menu : Création Compte
	 	 case 1 :
	 	 	 system("color 0E");
	 	 	 S
	 	 	 Z
	 	 	 printf("\t\t\t 1 ---->	NOUVEAU CLIENT\n");
	 	 	 Z
			 printf("\t\t\t 2 ---->	CLIENT EXISTANT\n");
			 Z
			 printf("\t\t\t 3 ---->	RETOUR\n");
			 Z
			 	 	 do{
	 				 printf("\n\t\tFAITES VOTRE CHOIX ?\t : ");
	 				 scanf("%d",&choix2);
					 }while(choix2<1 || choix2>3);
			 switch(choix2){
	 	 	 	 // Sous-Menu : Nouveau client
	 	 	 	 case 1 :
	 	 	 	 	 S
					 AJOUTER_CLIENT();
					 P
	 	 	 	 	 goto MENU;
	 	 	 	 	 break;
	 	 	 	 // Sous-Menu : Client existant
	 	 	 	 case 2 :
	 	 	 	 	 S
					 AJOUTER_CLIENT_EXISTANT();
					 P
	 	 	 	 	 goto MENU;
	 	 	 	 	 break;
	 	 	 	 // Retour
	 	 	 	 case 3 :
					 goto MENU;
    			 	 break;
			   }
	 	 	 break;
		 // Menu : Recherche Compte
	 	 case 2 :
	 	 	 system("color 02");
		     S
			 RECHERCHER_CLIENT();
			 P
			 goto MENU;
			 break;
	 	 // Menu : Affichage Compte
	 	 case 3 :
	 	 	 system("color 06");
		     S
			 AFFICHER_CLIENT();
			 P
			 goto MENU;
			 break;
	 	 // Menu : Opération Compte
	 	 case 4 :
	 	 	 system("color 0B");
	 	 	 S
	 	 	 Z
			 printf("\t\t\t 1 ---->	DEPOT\n");
			 Z
			 printf("\t\t\t 2 ---->	RETRAIT\n");
			 Z
			 printf("\t\t\t 3 ---->	VIREMENT\n");
			 Z
			 printf("\t\t\t 4 ---->	RETOUR\n");
			 Z
	 	 			 do{
	 				 printf("\n\t\tFAITES VOTRE CHOIX ?\t : ");
	 				 scanf("%d",&choix3);
					 }while(choix3<1 || choix3>4);
	 	 	 switch(choix3){
	 	 	 	 // Sous-Menu : Dépot
	 	 	 	 case 1 :
	 	 	 	 	 S
	 	 	 	 	 DEPOT();
	 	 	 	 	 P
	 	 	 	 	 goto MENU;
	 	 	 	 	 break;
	 	 	 	 // Sous-Menu : Retrait
	 	 	 	 case 2 :
	 	 	 	 	 S
	 	 	 	 	 RETRAIT();
	 	 	 	 	 P
	 	 	 	 	 goto MENU;
	 	 	 	 	 break;
	 	 	 	 // Sous-Menu : Virement
	 	 	 	 case 3 :
	 	 	 	 	 S
	 	 	 	 	 VIREMENT();
	 	 	 	 	 P
	 	 	 	 	 goto MENU;
	 	 	 	 	 break;
	 	 	 	 // Retour
	 	 	 	 case 4 :
					 goto MENU;
    			 	 break;
			   }
	 	 	 break;
	 	 // Menu : Affichage Opération
	 	 case 5 :
	 	 	 system("color 0D");
	 	 	 S
	 	 	 AFFICHER_OPERATION();
			 P
			 goto MENU;
	 	 	 break;
	 	 // Menu : Fermeture Compte
	 	 case 6 :
	 	 	 system("color 0C");
	 	 	 S
	 	 	 FERMETURE_COMPTE();
	 	 	 P
	 	 	 goto MENU;
	 	 	 break;
	 	 // Menu : Quitter Programme
	 	 case 7 :
	 	 	 system("color 04");
	 	 	 S
			 char q4;
			 Z
			 do{
			 puts("Voulez vous vraiment quitter le programme ?");
			 printf("(O/o) ='OUI' <----> (N/n) ='NON'\n : ");
			 F
			 scanf("%c",&q4);
			 }while(q4!=79 && q4!=111 && q4!=78 && q4!=110);
			 if(q4==79 || q4==111){
		 	 S
		 	 system("color 0F");
		 	 B
		 	 printf("  ----------------------------------------------------------------------------\n");
			 printf("  |                                                                          | \n");
			 printf("  |                  MERCI  DE  NOUS  FAIRE  CONFIANCE  !                    |\n");
			 printf("  |                                                                          | \n");
			 printf("  |                               A  BIENTOT                                 |\n");
			 printf("  |                                                                          | \n");
			 printf("  ----------------------------------------------------------------------------\n");
			 }
			 if(q4==78 || q4==110){
		 	 goto MENU;
			 }
	 	 	 break;
	 }
}

//	Fonction Ajouter CLIENT
void AJOUTER_CLIENT() {
	 FILE *C,*CP;
     C=fopen("F-CLIENT","a+");
     CP=fopen("F-COMPTE","a+");

                 printf("Entrez votre PRENOM\t : ");
                 	 F
                	 gets(cli.prenom);
				 printf("Entrez votre NOM\t : ");
                 	 F
                	 gets(cli.nom);

				 printf("Entrez votre CNI\t = ");
				 	 F
                 	 gets(cli.cni);
                 	 taille=strlen(cli.cni);
                 	 if(taille!=14){
                 	 	 S
                 	 	 B
					  	 puts("--------> NB <--------");
                 	 	 puts("Votre numero de CNI doit comporter 14 chiffres.");
                 	 	 printf("Veuillez recommencer SVP %s\n",cli.prenom);
					  	 printf("Entrez votre CNI\t  : ");
                 		 F
                		 gets(cli.cni);
                		 S
					  }

					 // création du numéro de compte
					 GENERATEUR_NUM_COMPTE();

					 // copie du numéro compte
					 //opt.nump=cli.num;
					 //cpt.numc=cli.num;

                 printf("Entrez votre TELEPHONE\t  : ");
                 	 F
                	 gets(cli.tel);
                	 taille2=strlen(cli.tel);
                 	 if(taille2!=9){
                 	 	 S
                 	 	 B
                 	 	 puts("--------> NB <--------");
                 	 	 puts("Votre numero doit comporter 9 chiffres\net commencer par 77, 76, 78 ou 70\nselon votre operateur.");
                 	 	 printf("Veuillez recommencer SVP %s\n",cli.prenom);
					  	 printf("Entrez votre TELEPHONE\t  : ");
                 		 F
                		 gets(cli.tel);
					  }

				 // définition de l'état
				 cpt.etat=1;
				 // mise à jour du solde
				 cpt.solde=15000;

				 //	saisit dans le fichier F-CLIENT
				 fseek(C,0,SEEK_END);
			 	 fwrite(&cli,sizeof(CLIENT),1,C);
			 	 
			 	 //	saisit dans le fichier F-COMPTE
				 fseek(CP,0,SEEK_END);
			 	 fwrite(&cpt,sizeof(COMPTE),1,CP);

				 S
				 puts("\n-------------------------------------------->\n");
				 printf("Merci %s\n",cli.prenom);
				 puts("Votre compte a ete creer avec succes !");
				 printf("Et votre numero de compte est le %s\n",cli.num);
				 printf("votre solde initiale est %d Fcfa",cpt.solde);
					 TIMING();
				 N
                     fclose(C);
                     fclose(CP);
}

//	Fonction Ajouter CLIENT EXISTANT
void AJOUTER_CLIENT_EXISTANT() {
     CLIENT tmp;
	 FILE *C;
     C=fopen("F-CLIENT","r");

     	 printf("Entrez votre numero de COMPTE\t = ");
     	 F
     	 gets(cli.ncni);
     		 taille3=strlen(cli.ncni);
             if(taille3!=7){
                 S
                 B
				 puts("--------> NB <--------");
                 puts("Le numero de COMPTE saisi est incorrect.");
                 puts("Veuillez recommencer SVP");
				 printf("Entrez votre numero de COMPTE\t  : ");
                 F
                 gets(cli.ncni);
                 S
				 }
     	 while(fread(&cli,sizeof(CLIENT),1,C) != EOF){
             if((strcmp(tmp.num,cli.num)) == 0){
                 AJOUTER_CLIENT();
             }
             if((strcmp(tmp.num,cli.num)) != 0){
             S
             B
		  	 puts("Il n y a pas de compte sur ce numero de COMPTE !");
		  	 puts("Veuillez creer un nouveau compte SVP");
		  	 P
		  	 MENU_PRINCIPALE();
		  	 }
         }
         fclose(C);
}

//	Fonction Rechercher CLIENT
void RECHERCHER_CLIENT() {		 
		 CLIENT tmp;
		 FILE *C;
         C=fopen("F-CLIENT","r");
		 
		 printf("Entrez votre numero de COMPTE\t = ");
    	 F
		 gets(tmp.num);
		 taille=strlen(tmp.num);
                 	 if(taille!=7){
                 	 	 S
                 	 	 B
                 	 	 B
					  	 puts("--------> NB <--------");
                 	 	 puts("Votre numero de COMPTE doit commencer par 'BB' suivi de 5 chiffres !");
                 	 	 puts("Veuillez recommencer SVP");
					  	 printf("Entrez votre CNI\t  : ");
                 		 F
                		 gets(tmp.num);
                		 S
					  }
         
         while(fread(&cli,sizeof(CLIENT),1,C) != EOF){
			 if((strcmp(tmp.num,cli.num)) == 0){
			 	 S
                 printf("---------- INFO <-> CLIENT ----------");
                 printf("\nPRENOM    :    %s",cli.prenom);
                 printf("\nNOM       :    %s",cli.nom);
				 printf("\nCNI       :    %14s",cli.cni);
				 printf("\nNUMERO    :    %s",cli.num);
				 printf("\nTELEPHONE :    %s\n",cli.tel);
				 P
				 MENU_PRINCIPALE();
             }
             if((strcmp(tmp.num,cli.num)) != 0){
             	 S
             	 B
            	 puts("Ce numero de COMPTE n'existe pas !");
            	 P
            	 MENU_PRINCIPALE();
		 	 }
         }
			 fclose(C);
}


//	Fonction Afficher CLIENT
void AFFICHER_CLIENT() {
	 FILE *C,*CP;
     C=fopen("F-CLIENT","r");
     CP=fopen("F-COMPTE","r");

     if(C==NULL && CP==NULL){
     	 B
     	 puts("Une erreur s'est produite veuillez reessayer plustard !");
	 }
	 else{
	 printf("LA LISTE DES CLIENTS : |\n");
	 printf("--------------------------------------------------------------------------\n");
     printf("> Numero COMPTE --->  Solde  ---> Etat ---> Proprietaire -----------------|\n");
     printf("--------------------------------------------------------------------------\n");

	 do{
	 	 fread(&cli,sizeof(CLIENT),1,C);
	 	 fread(&cpt,sizeof(COMPTE),1,CP);
	 	 F
         printf(">     %s   ---> %d F --->   %d  ---> %s %s\n",cli.num,cpt.solde,cpt.etat,cli.prenom,cli.nom);
         F
    	 }while(!feof(C) && !feof(CP));
     }
	 fclose(C);
	 fclose(CP);
}

//	Fonction Fermeture de COMPTE
void FERMETURE_COMPTE(){

     printf("Entrez votre numero du CLIENT\t = ");
     F
     gets(cli.numc);

		 if(cli.numc==cli.num){
             FILE *C,*C2;
             C=fopen("F-CLIENT","r");
             C2=fopen("Tempo","w+");
                 do{
                     fread(&cli,sizeof(CLIENT),1,C);
                    if(cli.numc!=cli.num){
                         fwrite(&cli,sizeof(CLIENT),1,C);
                    }
                 }while(!feof(C));
             fclose(C2);
             fclose(C);
            	 remove("F-CLIENT");
                 rename("Tempo","F-CLIENT");
             S
             puts("Supression effectuer avec succes");
         }
         else{
        		 S
        		 B
                 puts("Ce numero n'existe pas !");
                 puts("Veuillez entrez le bon numero SVP");
         }
}

//	Fonction Depot
void DEPOT (){
	 CLIENT tmp;
	 FILE *C,*OP;
     C=fopen("F-CLIENT","r");
     OP=fopen("F-OPERATION","a+");
     char q1;

     	 printf("Entrez votre numero de COMPTE\t = ");
     	 F
     	 gets(tmp.num);
     		 taille3=strlen(tmp.num);
             if(taille3!=7){
                 S
                 B
				 puts("--------> NB <--------");
                 puts("Le numero de COMPTE saisi est incorrect.");
                 puts("Veuillez recommencer SVP");
				 printf("Entrez votre numero de COMPTE\t  : ");
                 F
                 gets(tmp.num);
                 S
				 }
     	 while(fread(&cli,sizeof(CLIENT),1,C) != EOF){
             if((strcmp(tmp.num,cli.num)) == 0){
     do{
	 puts("Voulez vous vraiment faire un depot ?");
	 printf("(O/o) ='OUI' <----> (N/n) ='NON'\n : ");
	 F
	 scanf("%c",&q1);
	 }while(q1!=79 && q1!=111 && q1!=78 && q1!=110);

	 if(q1==79 || q1==111){
	 	 do{
	 	 puts("Combien voulez vous deposer ?");
	 	 scanf("%d",&somme);
	 	 }while(somme<15000);
	 	 opt.last=opt.montant;
	 	 opt.montant=opt.last+somme;
	 	 //	opt.type="DEPOT";
	 	 S
	 			 GENERATEUR_NUM_OPERATION();

	 	 puts("---------------------------|");
		 puts("  Depot reussi avec succes |");
	 	 puts("---------------------------|");
	 	 N
	 	 opt.montant=opt.montant+cpt.solde;
	 	 printf("votre nouveau solde est de %d Fcfa",opt.montant);
	 	 N
	 	 printf("Operation numero %s",opt.numop);
	 	 N
	 	 
	 	 //	saisit dans le fichier F-OPERATION
		 fseek(OP,0,SEEK_END);
		 fwrite(&opt,sizeof(OPERATION),1,OP);
		 P		 
		 MENU_PRINCIPALE();
	 }
	 else{
	 	 S
	 	 B
	 	 puts("Operation annuler !!!");
	 }
             }
             if((strcmp(tmp.num,cli.num)) != 0){
             S
             B
		  	 puts("Il n y a pas de compte sur ce numero de COMPTE !");
		  	 puts("Veuillez creer un nouveau compte SVP");
		  	 P
		  	 MENU_PRINCIPALE();
		  	 }
         }
         fclose(C);	
         fclose(OP);
}

//	Fonction Retrait
void RETRAIT (){
	 char q2;
	 CLIENT tmp;
	 FILE *C,*OP;
     C=fopen("F-CLIENT","r");
     OP=fopen("F-OPERATION","a+");
		 
		 printf("Entrez votre numero de COMPTE\t = ");
    	 F
		 gets(tmp.num);
		 taille=strlen(tmp.num);
                 	 if(taille!=7){
                 	 	 S
                 	 	 B
					  	 puts("--------> NB <--------");
                 	 	 puts("Votre numero de COMPTE doit commencer par 'BB' suivi de 5 chiffres !");
                 	 	 puts("Veuillez recommencer SVP");
					  	 printf("Entrez votre CNI\t  : ");
                 		 F
                		 gets(tmp.num);
                		 S
					  }
         while(fread(&cli,sizeof(CLIENT),1,C) != EOF){
			 if((strcmp(tmp.num,cli.num)) == 0){
			 	 do{
	 puts("Voulez vous vraiment faire un retrait ?");
	 printf("(O/o) ='OUI' <----> (N/n) ='NON'\n : ");
	 F
	 scanf("%c",&q2);
	 }while(q2!=79 && q2!=111 && q2!=78 && q2!=110);

	 if(q2==79 || q2==111){
	 	 if(opt.last<=0){
	 	 	 S
	 	 	 puts("Votre compte est vide !");
	 	 	 puts("Veuillez faire un depot avant pouvoir faire un retrait.");
		  }
		  else{
	 	 do{
	 	 puts("Combien voulez vous retirer ?");
	 	 scanf("%d",&somme);
	 	 }while(somme<=0);
	 	 opt.last=opt.montant;
	 	 opt.montant=opt.last-somme;
	 	 //	opt.type="RETRAIT";
	 	 S
	 	 		 GENERATEUR_NUM_OPERATION();

		 puts("---------------------------|");
	 	 puts("  Retrait reussi avec succes |");
	 	 puts("---------------------------|");
	 	 N
	 	 opt.montant=cpt.solde-opt.montant;
	 	 printf("votre nouveau solde est de %d Fcfa",opt.montant);
	 	 N
	 	 printf("Operation numero %s",opt.numop);
	 	 N
	 	 
	 	 //	saisit dans le fichier F-OPERATION
		 fseek(OP,0,SEEK_END);
		 fwrite(&opt,sizeof(OPERATION),1,OP);
		 P
		 
		 MENU_PRINCIPALE();
	 	 }
	 }
	 else{
	 	 S
	 	 B
	 	 puts("Operation annuler !!!");
	 }
             }
             if((strcmp(tmp.num,cli.num)) != 0){
             	 S
             	 B
            	 puts("Ce numero de COMPTE n'existe pas !");
            	 P
            	 MENU_PRINCIPALE();
		 	 }
         }
	 fclose(C);
	 fclose(OP);
}


//	Fonction Virement
void VIREMENT (){
	 int test;
	 FILE *C;
     C=fopen("F-CLIENT","r");
     fread(&cli,sizeof(CLIENT),1,C);
	 char q2;

	 do{
	 puts("Voulez vous vraiment faire un virement ?");
	 printf("(O/o) ='OUI' <----> (N/n) ='NON'\n : ");
	 F
	 scanf("%c",&q2);
	 }while(q2!=79 && q2!=111 && q2!=78 && q2!=110);

	 if(q2==79 || q2==111){
	 	 if(opt.last<=0){
	 	 	 S
	 	 	 B
	 	 	 puts("Votre compte est vide !");
	 	 	 puts("Veuillez faire un depot avant pouvoir faire un virement.");
			 }
		  else{
		 printf("Entrez le numero de compte du client que vous voulez virer\n = ");
		 gets(cli.numtest);
		 while(!feof(C)){
             test=strcmp(cli.rech,cli.num);
			 if(test=1){
                 do{
			 	 puts("Combien voulez vous virer ?");
			 	 scanf("%d",&somme);
			 	 }while(somme<=0);
			 	 opt.last=opt.montant;
			 	 opt.montant=opt.last-somme;
			 	 //	opt.type="VIREMENT";
			 	 S
			 			 GENERATEUR_NUM_OPERATION();
			 	 puts("---------------------------|");
			 	 puts("  Virement reussi avec succes |");
	 			 puts("---------------------------|");
	 			 N
			 	 printf("votre nouveau solde est de %d Fcfa",opt.montant);
			 	 N
			 	 printf("Operation numero %s",opt.numop);
	 			 N
            	 }
             else{
             	 S
             	 B
            	 puts("Ce numero de COMPTE n'existe pas !");
        	     }
             fread(&cli,sizeof(CLIENT),1,C);
		 	 }
		 }
	 }
	 else{
	 	 S
	 	 B
	 	 B
	 	 puts("Operation annuler !!!");
	 }
}

//	Fonction Affichage de OPERATION
void AFFICHER_OPERATION(){
	 FILE *C,*OP;
     C=fopen("F-CLIENT","r");
     OP=fopen("F-OPERATION","r");

     if(OP==NULL){
     	 B
     	 B
     	 puts("Une erreur s'est produite veuillez reessayer plustard !");
	 }
	 else{
	 printf("LA LISTE DES CLIENTS : |\n");
	 printf("-----------------------------------------------------------------------------\n");
     printf("> Numero OPERATION -> Type -> Montant -> Date & Heure -> Numero COMPTE ------|\n");
     printf("-----------------------------------------------------------------------------\n");

	 do{
	 	 fread(&cpt,sizeof(OPERATION),1,OP);
	 	 fread(&cli,sizeof(CLIENT),1,C);
	 	 F
         printf(">-> %s \t-> %s \t-> %d \t-> %s \t-> %s\n",opt.numop,opt.type,opt.montant,opt.heure,cli.num);
    	 }while(!feof(OP));
     }
	 fclose(C);
	 fclose(OP);
}

//	Fonction Génératrice du Temps
int TIMING(void){
     time_t secondes;
     struct tm instant;
     time(&secondes);
     instant=*localtime(&secondes);
     
     if(instant.tm_mon+1==1){
     N
     printf(" %d / Janvier / 2018 | %d:%d:%d\n", instant.tm_mday, instant.tm_hour, instant.tm_min, instant.tm_sec);
     }
     if(instant.tm_mon+1==2){
     N
     printf(" %d / Fevrier / 2018 | %d:%d:%d\n", instant.tm_mday, instant.tm_hour, instant.tm_min, instant.tm_sec);
     }
     if(instant.tm_mon+1==3){
     N
     printf(" %d / Mars / 2018 | %d:%d:%d\n", instant.tm_mday, instant.tm_hour, instant.tm_min, instant.tm_sec);
     }
     if(instant.tm_mon+1==4){
     N
     printf(" %d / Avril / 2018 | %d:%d:%d\n", instant.tm_mday, instant.tm_hour, instant.tm_min, instant.tm_sec);
     }
     if(instant.tm_mon+1==5){
     N
     printf(" %d / Mai / 2018 | %d:%d:%d\n", instant.tm_mday, instant.tm_hour, instant.tm_min, instant.tm_sec);
     }
     if(instant.tm_mon+1==6){
     N
     printf(" %d / Juin / 2018 | %d:%d:%d\n", instant.tm_mday, instant.tm_hour, instant.tm_min, instant.tm_sec);
     }
     if(instant.tm_mon+1==7){
     N
     printf(" %d / Juillet / 2018 | %d:%d:%d\n", instant.tm_mday, instant.tm_hour, instant.tm_min, instant.tm_sec);
     }
     if(instant.tm_mon+1==8){
     N
     printf(" %d / Aout / 2018 | %d:%d:%d\n", instant.tm_mday, instant.tm_hour, instant.tm_min, instant.tm_sec);
     }
     if(instant.tm_mon+1==9){
     N
     printf(" %d / Septembre / 2018 | %d:%d:%d\n", instant.tm_mday, instant.tm_hour, instant.tm_min, instant.tm_sec);
     }
     if(instant.tm_mon+1==10){
     N
     printf(" %d / Octobre / 2018 | %d:%d:%d\n", instant.tm_mday, instant.tm_hour, instant.tm_min, instant.tm_sec);
     }
     if(instant.tm_mon+1==11){
     N
     printf(" %d / Novembre / 2018 | %d:%d:%d\n", instant.tm_mday, instant.tm_hour, instant.tm_min, instant.tm_sec);
     }
     if(instant.tm_mon+1==12){
     N
     printf(" %d / Decembre / 2018 | %d:%d:%d\n", instant.tm_mday, instant.tm_hour, instant.tm_min, instant.tm_sec);
     }
}

//	FIN du Programme..
