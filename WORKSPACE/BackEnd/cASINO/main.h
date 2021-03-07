/*  Copyright © 2020-2021 Nacro Chaabane
    All rights reserved.
    Software © by Chaabane D.S Nacro
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 0
#define VAR() int out;
#define ACCEUIL() continue

void play();
void levelf();
float quotation=1,MAX;
float version=1.01;

/* Historique de maj:

    Version 1.00:   [05/06/2020]
        -First version

    version 1.01:   [26/02/2021]
        -Bugs fixes and improvements
        -3 new difficulty levels

*/

/* prochainement : Change the difficulty

    void levelf()
    {
        printf("Saisir le maximum\n");
        scanf("%d",&MAX);
        quotation=2*MAX/100;
    }
*/

/* IDEAS:
    * switch from the console log to window
    * add a system of records
    * regroup certains things in functions such as the cases of menu
*/