#include <stdio.h>
int main()
{
	int na;
	printf("Entrer un nombre: ");
	scanf("%d", &na);
	
	int nb;
	printf("Entrer un nombre: ");
	scanf("%d", &nb);

	int nc;
	printf("Entrer un nombre: ");
	scanf("%d", &nc);
	
	nc = na;
	na = nb;
	nb = nc;
	
	printf("Nombre na = %d\n",na);
	printf("Nombre nb = %d\n",nb);
	printf("Nombre nc = %d\n",nc);

	return 0;
	
}