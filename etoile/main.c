#include <stdio.h>

int main(){
        int choix,i,j,n,espace,etoile=4;
debut :
        system("pause");
        system("cls");
        do{
            printf("\t**********MENU***********\n");
            printf("\t*\t\t\t*\n\t*\t\t\t*\n");
            printf("\t*\t1- CARRE\t*\n" );
            printf("\t*\t\t\t*\n\t*\t\t\t*\n");
            printf("\t*\t2- RECTANGLE\t*\n");
            printf("\t*\t\t\t*\n\t*\t\t\t*\n");
            printf("\t*\t3- TRIANGLE\t*\n");
            printf("\t*\t\t\t*\n\t*\t\t\t*\n");
            printf("\t*\t4- QUITTER\t*\n");
            printf("\t*\t\t\t*\n\t*\t\t\t*\n");
            printf("\t*************************\n");
            printf("\tFaites votre choix: " );
            scanf("%d",&choix);
            if(choix!=1 && choix!= 2 && choix!=3 && choix!=4)
                printf("Mauvais choix ! \n Veuiller faire un bon choix\n") ;
        }while(choix!=1 && choix!= 2 && choix!=3 && choix!=4);

        if(choix == 1){
                system("pause");
                system("cls");
            puts("\tCARRE");
        do
        {
            puts("Entrez le nombre de etoile");
            scanf("%d",&n);
        }while(n<=0);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {

             if(i==0 || i==n-1 )
             {
                 printf("* ");
             }
             else
             {
                  if( j==0 || j==n-1)
                printf("* ");
                else
                {
                     if(i!=0 && i!=n-1 && j!=0 && j!=n-1)
                printf("  ");
                }
             }
        }
        printf("\n");
    }
    goto debut;
    }
    if(choix==2)
    {
        system("pause");
        system("cls");
        puts("\tRECTANGLE");
        do
        {
            puts("Entrez le nombre de etoile");
            scanf("%d",&n);
        }while(n<=0);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {

             if(i==0 || i==n-1 )
             {
                 printf("**");
             }
             else
             {
                  if( j==0 || j==n-1)
                printf("*  ");
                else
                {
                     if(i!=0 && i!=n-1 && j!=0 && j!=n-1)
                printf("  ");
                }
             }
        }
        printf("\n");
    }
    goto debut;
    }
    if(choix == 3)
    {
        system("pause");
        system("cls");
        puts("\tTRIANGLE");

         do
        {
            puts("Entrez le nombre de etoile");
            scanf("%d",&n);
        }while(n<=0);
       j=n;
       espace= n;
		for(j=n;j!=0;j--){
                puts("");
			for(i=0; i!= espace;i++){
						printf(" ");
				}
            espace--;
            for(i=0; i != etoile;i++){
						printf("*");
				}
            etoile+=2;
		}
        puts("");
        goto debut;
    }
    if(choix==4)
    {
         system("pause");
        system("cls");
         puts("-- AU REVOIR --");
    }

}
