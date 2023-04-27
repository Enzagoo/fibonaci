#include <stdio.h>

int somme(int *p);
int moyenne(int *p);
void init_tableau(int* p);
void print_tableau(int* p);
#define MAX_TAB 5


int main()
{
    int tab[MAX_TAB];

    init_tableau(tab);
}

void init_tableau(int* p)
{
    for(int i = 0; 1 < MAX_TAB; i++)
    {
        printf("valeur : ");
        scanf("%d" , p++);
    }
}
void print_tableau(int* p)
{
     for(int i = 0; 1 < MAX_TAB; i++)
    {
        printf("tab{%d} = %d\n", i, *p++);
    }
}
int somme(int *p)
{
    int somme = 0;

    for(int i = 0; i < MAX_TAB; i++)
    {
        somme += *p++;
    }
}
int moyenne(int *p)
{
    return somme(p) / MAX_TAB;
}