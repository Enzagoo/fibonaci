#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 5


int main(){


int valeur = 0;
int tab[MAX];
int* p = &tab[0];
for (int i = 0;i < MAX; i++)
{
    printf("saisir une valeur : ");
    scanf("%d", &valeur);
    *p++ = valeur;
}

printf("la valeur est : %d\n", tab[0]);
printf("la valeur est : %d\n", tab[1]);
printf("la valeur est : %d\n", tab[2]);
printf("la valeur est : %d\n", tab[3]);
printf("la valeur est : %d\n", tab[4]);
}