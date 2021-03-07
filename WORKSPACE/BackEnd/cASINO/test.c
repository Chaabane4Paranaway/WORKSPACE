#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char a;
here:
printf("Saisir un nombre entre 1 et 2\n");
scanf("%c",&a);
while (!isdigit(a))
{
    printf("Réessayer!!\n");
    scanf("%d",&a);
}
switch (a)
{
    case '1':
        printf("Vous avez choisis 1\n");
        break;
    case '2':
        printf("Vous avez choisis 2");
        break;
    default:
        printf("Erreur réessayez!!\n");
        goto here;
        break;
}
    
}