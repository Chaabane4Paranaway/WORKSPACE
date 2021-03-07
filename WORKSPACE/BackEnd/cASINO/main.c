#include "main.h"
#include <ctype.h>

int main (int argc, char *argv[])
{
    srand(time(NULL)); //required for the random number
    VAR();
    int menu,select_help;
    int score;
    int pos=1;

    while (pos)
    {

    printf("\n\n\n***Bienvenu Sur Casino %.2f***\n\n1-Jouer\n2-Help\n3-A propos\n",version);
    scanf("%d",&menu);
    
        while (menu!=1 && menu!=2 && menu!=3)//Controle de saisie
        {
            printf("Erreur! Veuillez choisir entre\n\n1-Jouer\n2-Help\n3-A propos\n");
            scanf("%d",&menu);
        }
        switch (menu)
        {
        case 1:
            play();
            break;
        case 2:
            printf("help\n\n1-Principe\n2-Comment jouer?\n");
            scanf("%d",&select_help);
            while (select_help!=1 && select_help!=2) //Controle de saisie
            {
                printf("Erreur! Veuillez choisir entre\n\n1-Principe\n2-Comment jouer?\n");
                scanf("%d",&select_help);
            }
            switch (select_help)//Comment jouer et Principe
            {
                case '1':
                    printf("Principe\n\nVous misez une somme et vous lancez la roulette.\nPour doubler votre mise il faut un nombre superieur a la moitie \nVous perdez si le nombre est inferieur a la moitie.\n");
                    ACCEUIL();
                case '2':
                    printf("Comment jouer\n\nPour jouer selectionnez d'abord une mise\nEnsuite lancez la roulette. Vous avez le choix entre voir le nombre ou partir\nUne fois le nombre affiche vous ne pourrez plus retenter votre chance\nLa regle du quitte ou double est de mise dans ce jeu\nVous pouvez arreter quand vous le voulez ou tenter de gagner le double a vos risques et perils.\n");
                    ACCEUIL();
            }
        case 3:
            printf("A propos\n\n");
            printf("Version %.2f\nProduced by Paran4way, the 05th June 2020\n\n",version);
            ACCEUIL();
        }
        return EXIT_SUCCESS;
    }
}
/*All the code about the game. This is the core of all the game*/
void play()
{
    int select_mise=1,select;
    int score;
    double solde;
    int cond=1;
    
    printf("Mise\n\n1-10DHs\n2-100DHs\n");
    scanf("%d",&select_mise);
    while (select_mise!=1 && select_mise!=2)//Controle de saisie
    {
        printf("Erreur! Veuillez choisir entre\n\n1-10DHs\n2-100DHs\n");
        scanf("%d",&select_mise);
    }
    switch(select_mise)
    {
        case 1:
            solde=10;
            break;
        case 2:
            solde=100;
            break;
    }
    levelf();
    while (cond)
    {
        printf("Votre solde est de %.2lf DHS\n\n1)Lancer la roue\n2)Partir\n",solde);
        scanf("%d",&select);
        while (select!=1 && select!=2)//Controle de saisie
        {
            printf("Erreur! Veuillez choisir entre\n\n1)Lancer la roue\n2)Partir\n");
            scanf("%d",&select);
        }
        score=((MAX-MIN)/2)+1;
        switch (select)
        {
            case 1:
            //(rand()%(MAX-MIN+1))+MIN
                
                printf("Votre score est de %d\n",score);
                if (score<=((MAX-MIN)/2))
                {
                    printf("Dommage %d n'est pas superieure a %d. Vous perdez votre mise.\n",score,((MAX-MIN)/2));
                    cond=0;
                }
                else
                {
                    solde*=quotation;
                    printf("Bingo!!!Votre mise est multipliee par %.1f\n\n",quotation);
                }
                break;
            case 2:
                printf("BRAVO!!Vous repartez avec %.2lf DHS et votre score etait %d.\n\n\n\n",solde,score);
                cond=0;
        }
    }
}
/*Function allowing the choice of game difficulty*/
void levelf()
{
    int select_level;
    printf("Veuillez selectionner le niveau de difficulte\n1) 0-10\n2) 0-100\n3) 0-1000\n\t");
    scanf("%d",&select_level);
    switch (select_level)
    {
        case 1 :
            quotation=1.2;
            MAX=10;
            break;
        case 2:
            quotation=2;
            MAX=100;
            break;
        case 3:
            quotation=20;
            MAX=1000;
            break;
        default:
            printf("Erreur!! Veuillez réessayer\n");
            levelf();
    }
}
