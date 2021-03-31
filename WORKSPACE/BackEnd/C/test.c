#include "../H/test.h"

int main()
{
    int choix_serie,choix_menu,exo;
    float x,y,s;
    char MENU[20];
    int A[100],i,n;
    int nbr;

    printf("Selectionner la serie!!\n");
    scanf("%d",&choix_serie);
    switch(choix_serie)
    {
        case 1:
            switch (ex(choix_serie))
            {
            case 1:
            case 2:
                
                printf("Saisir deux reels\n");
                scanf("%f %f",&x,&y);
                printf("\nLa somme de %.2f et %.2f est %.2f et leur moyenne est %.2f",x,y,SOMME(x,y),MOYENNE(x,y));
                break;
            case 3:
                printf("Saisir deux nombres reels\n");
                scanf("%f %f",&x,&y);
                printf("Menu\n1) Somme\n2) Multiplication\n3) Moyenne\n");
                scanf("%d",choix_menu);
                retry :
                switch (choix_menu)
                {
                case 1:
                    SOMME(x,y);
                    strcpy(MENU,"SOMME");
                    break;
                case 2:
                    MULTIPLICATION(x,y);
                    strcpy(MENU,"MULTIPLICATION");
                    break;
                case 3:
                    MOYENNE(x,y);
                    strcpy(MENU,"MOYENNE");
                    break;
                default:
                printf("Erreur!!\n");
                    goto retry;
                }
                printf("La %s de %f et %f donne %f",MENU,x,y,s);
                break;
            case 4:
                do
                {
                    printf("Saisir la taille du tableau A\n");
                    scanf("%d",&n);
                } while (i<=0 || n>100);
                for (i=0;i<n;i++)
                {
                    printf("Saisir la valeur de A[%d]\n",i);
                    scanf("%d",&A[i]);
                }
                ECRIRE_TAB(A,n);
                printf("La somme des elements du tableau A est %ld\n",SOMME_TAB(A,n));
                break;
            case 5:
                do
                {
                    printf("Saisir la taille du tableau A\n");
                    scanf("%d",&n);
                } while (i<=0 || n>100);
                for (i=0;i<n;i++)
                {
                    printf("Saisir la valeur de A[%d]\n",i);
                    scanf("%d",&A[i]);
                }
                printf("Saisir la valeur de X que vous souhaitez eliminer du tableau\n");
                scanf("%d",&nbr);
                EXO5(nbr,A,n);
                break;
            case 6:
                do
                {
                    printf("Saisir la taille du tableau A\n");
                    scanf("%d",&n);
                } while (i<=0 || n>100);
                for (i=0;i<n;i++)
                {
                    printf("Saisir la valeur de A[%d]\n",i);
                    scanf("%d",&A[i]);
                }
                ECRIRE_TAB(A,n);
                INVERSE(A,n);
                ECRIRE_TAB(A,n);
                break;
            default:
            OUT
                break;
            }
            break;

            case 2:

            break;
            //autres series

            default:
            printf("Pas de serie %d.",choix_serie);
            break;
    }
}

int ex(int serie)
{
    int choix_exo;
    printf("Selectionner l'exercice de la serie %d\n",serie);
    scanf("%d",&choix_exo);
    return choix_exo;
}

float SOMME(float a,float b)
{
    return (a+b);
}
float MOYENNE(float a,float b)
{
    return (SOMME(a,b)/2);
}
float MULTIPLICATION(float a,float b)
{
    return a*b;
}
void ECRIRE_TAB(int TAB[],int N)
{
    int i;
    for(i=0;i<N;i++) printf("%d ",TAB[i]);
}
long SOMME_TAB(int TAB[],int N)
{
    int somme,i;
    for(i=0,somme=0;i<N;i++) somme+=TAB[i];
    return somme;
}
void EXO5(int X,int A[],int N)
{
    int N_new,i,j;
    N_new=N;
    for(i=0;i<N;i++)
    {
        if(A[i]==X)
        {
            N_new-=1;
            for(j=i;j<N_new;j++) A[j]=A[j+1];
            i-=1;
            N-=1;
            
        }
    }
    ECRIRE_TAB(A,N_new);
}

void INVERSE(int TAB[],int N)
{
    int tmp;
    for(int i=0;i<N;i++)
    {if(i==N/2) break;
        tmp=TAB[i];
        TAB[i]=TAB[N-i-1];
        TAB[N-i-1]=tmp;
        
    }
}