// DAOUDA BA

// Ce programme permet de faire la convertion entre les différentes bases

// DEBUT du programme..
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>

main()
{	 
	
	// Début de la déclaration des variables que nous allons utilisés dans notre programme.
	int base, base2, base10;
	int b2, b10, quit, retour2, retour10;
	long int binarynum, octalnum = 0, j = 1, remainder, hexadecimalval = 0, i = 1;
	int num, decimal_val = 0, bs10 = 1, rem;
	long decimal_num, bs2 = 1, bs8 = 1, binary = 0, octal = 0;
        
    // Création du MENU principale du progarmme
    do{
    
	do{
    
	do{
	system("cls");
    printf("  ----------------------------------------------------------------------------\n");
    printf("  |                                                                          | \n");
    printf("  |                             MENU  PRINCIPALE                             | \n");
    printf("  |                                                                          | \n");
    printf("  |                                  BONJOUR                                 | \n");
    printf("  |                                                                          | \n");
    printf("  |         Ce Programme permet de faire la convertion entre les bases       | \n");
    printf("  |                                                                          | \n");
    printf("  ----------------------------------------------------------------------------\n\n");
    
    printf("\n   1 | Base 2\n");
    printf("\n   2 | Base 10\n");
	printf("\n   3 | Quitter\n");	
			 	
    
	printf("\n\n   --> Allez vers..?\n : ");
    scanf("%d",&base);
    }while (base<=0 || base>3);
    
    system("cls");
    
    switch(base){



		 // MENU de la base 2
		 
    	case 1 : printf("  ----------------------------------------------------------------------------\n");
				 printf("  |                                                                          | \n");
				 printf("  |                              MENU  BASE  2                               |\n");
				 printf("  |                                                                          | \n");
				 printf("  ----------------------------------------------------------------------------\n");
    				 
					 printf("\n   1 | Vers la base 8 \n");
    				 printf("\n   2 | Vers la base 10 \n");
    				 printf("\n   3 | Vers la base 16 \n");
    				 printf("\n   4 | Retour au Menu Principale \n");
    				 
    				 printf("\n   --> Faites votre choix ?\n   = ");
    				 scanf("%d",&base2);
    				 
    			 switch(base2){
    			 	case 1 : system("cls");
							 	 printf("\n\n\n");
					 		 printf("\n   Entrer la valeur binaire = ");
							 scanf("%ld", &binarynum);
								 while (binarynum != 0){
								 remainder = binarynum % 10;
								 octalnum = octalnum + remainder * j;
								 j = j * 2;
								 binarynum = binarynum / 10;
								 }
								 printf("\n   La valeur en octale = %lo\n", octalnum);
	
							 printf("\n\n");
							 system("PAUSE");
							 system("cls");
    			 		 break;
    			 	case 2 : system("cls");
							 	 printf("\n\n\n");
					 		 printf("\n   Entrer la valeur binaire = ");
							 scanf("%ld", &binarynum);
								 while (binarynum > 0){
								 rem = binarynum % 10;
								 decimal_val = decimal_val + rem * bs10;
								 binarynum = binarynum / 10 ;
								 bs10 = bs10 * 2;
								 }
							 printf("\n   La valeur en decimal = %d\n", decimal_val);
							 
							 printf("\n\n");
							 system("PAUSE");
							 system("cls");
    			 		 break;
    			 	case 3 : system("cls");
							 	 printf("\n\n\n");
					 		 printf("\n   Entrer la valeur binaire = ");
							 scanf("%ld", &binarynum);
							 	 while (binarynum != 0){
							 	 remainder = binarynum % 10;
							 	 hexadecimalval = hexadecimalval + remainder * i;
							 	 i = i * 2;
							 	 binarynum = binarynum / 10;
								  }
							 printf("\n   La valeur en hexadecimal = %lX\n", hexadecimalval);
							 
							 printf("\n\n");
							 system("PAUSE");
							 system("cls");
    			 		 break;
    			 	case 4 : do {
							printf("  ----------------------------------------------------------------------------\n");
							printf("  |                                                                          | \n");
							printf("  |                      APPUYER SUR 1 POUR CONFIRMER                        |\n");
							printf("  |                                                                          | \n");
							printf("  ----------------------------------------------------------------------------\n");
							printf("\n   --> ");
							scanf("%d", &retour2);
							} while (retour2!=1);
							system("cls");
    			 		 break;
    			 	default : printf("\n   SVP vous devez faire votre choix entre ces 4\n");
				 }
    				 	 
    		break;

		
		
		 // MENU de la base 10
		
    	case 2 : printf("  ----------------------------------------------------------------------------\n");
				 printf("  |                                                                          | \n");
				 printf("  |                              MENU  BASE  10                              |\n");
				 printf("  |                                                                          | \n");
				 printf("  ----------------------------------------------------------------------------\n");
    				 
					 printf("\n   1 | Vers la base 2 \n");
    				 printf("\n   2 | Vers la base 8 \n");
    				 printf("\n   3 | Vers la base 16 \n");
    				 printf("\n   4 | Retour au Menu Principale \n");
    				 
    				 printf("\n   --> Faites votre choix ?\n   = ");
    				 scanf("%d",&base10);
    				 
    			 switch(base10){
    			 	case 1 : system("cls");
							 	 printf("\n\n\n");
					 		 printf("\n   Entrer la valeur en decimal : ");
							 scanf("%ld", &num);
								 decimal_num = num;
							 	 while (num > 0){
  								 remainder = num % 2;
								 binary = binary + remainder * bs2;
								 num = num / 2;
								 bs2 = bs2 * 10;
								 }
							 printf("\n   La valeur en binaire = %ld\n", binary);
							 
							 printf("\n\n");
							 system("PAUSE");
							 system("cls");
    			 		 break;
    			 	case 2 : system("cls");
							 	 printf("\n\n\n");
							 printf("\n   Entrer la valeur en decimal : ");
							 scanf("%ld", &num);
								 decimal_num = num;
								 while (num > 0){
  								 remainder = num % 8;
  								 octal = octal + remainder * bs8;
								 num = num / 8;
								 bs8 = bs8 * 10;
								 }
							 printf("\n   La valeur en octale = %ld\n", octal);
							 
							 printf("\n\n");
							 system("PAUSE");
							 system("cls");
    			 		 break;
    			 	case 3 : system("cls");
							 		 printf("\n\n\n");
							 printf("\n   Entrer la valeur en decimal : ");
    			 	
							 
    			 			 printf("\n\n");
    			 			 system("PAUSE");
						     system("cls");	
    			 		 break;
    			 	case 4 : do {
							printf("  ----------------------------------------------------------------------------\n");
							printf("  |                                                                          | \n");
							printf("  |                      APPUYER SUR 1 POUR CONFIRMER                        |\n");
							printf("  |                                                                          | \n");
							printf("  ----------------------------------------------------------------------------\n");
							printf("\n   --> ");
							scanf("%d", &retour10);  } while (retour10!=1);
							system("cls");
    			 		break;
    			 	default : printf("\n   SVP vous devez faire votre choix entre ces 4\n");
				 }
    	
    		break;


		 
		// QUITTER
		
    	case 3 :	
				do{
				printf("  ----------------------------------------------------------------------------\n");
    			printf("  |                                                                          | \n");
				printf("  |                     ETES VOUS SUR DE VOULOIR QUITTER                     |\n");
				printf("  |                                                                          |\n");
				printf("  |                         1) OUI        2) ANNULER                         |\n");
				printf("  |                                                                          | \n");
				printf("  ----------------------------------------------------------------------------\n");
				printf("\n\n   --> Faites votre choix ?\n	: ");
				scanf("%d",&quit);
				} while (quit<=0 || quit>2);
				
				if(quit==1){
				system("cls");	
				printf("  ----------------------------------------------------------------------------\n");
				printf("  |                                                                          | \n");
				printf("  |                            MERCI ET AU REVOIR                            |\n");
				printf("  |                                                                          | \n");
				printf("  ----------------------------------------------------------------------------\n");
				}
				if(quit==2){
				system("cls");
				}
				
				break;
	}
	
	getch;
	
	}while (quit!=2);
	
	}while (retour2==1 || retour10==1);
		
}

// FIN du Programme..
