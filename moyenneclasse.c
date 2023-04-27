#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// j'initalise mes variables 
char prenom[20] = "?";
int note;
int moyenne = 0;
int somme = 0;
int i = 0;
int notemax = -1;
int notemini = 21;
char elevemax[20]="plus petit";
char elevemini[20]="rien du tout";


int main()
{

    // j'initalise mes variables 
    char prenom[20] = "?";
    float note;
    float moyenne = 0;
    float somme = 0;
    int i = 0;
    float notemax = -1;
    float notemini = 21;
    char elevemax[20]="plus petit";
    char elevemini[20]="rien du tout";

    //Je crée une boucle tan que qui me permet de saisir des notes et prénom tant que ma condition n'est pas valide
    while (strcmp(prenom, "FIN") != 0) {
        printf("prenom de l'eleve: ");
        scanf("%s", prenom);
        
        //je crée une condition SI qui me permet de mettre un stop au reste du programme si ma condition précédente est validé
        if (strcmp(prenom, "FIN") != 0){
        printf("note de l'eleve: ");
        scanf("%f", &note);
    
    //je rentre dans la somme les notes que j'ai saisi en les ajouté pour l'utilisé dans ma moyenne et le i est mon diviseur 
        if (note>=0 && note <= 20)
        {
            somme = somme + note;
            i = i + 1;
        }
    
    
        
        //tant que ma note n'est pas comprise entre 20 et 0 je redemande une note
        if (note<0 || note>20)
        {
            printf("Saisi de note incorrect rentre une note entre 20 et 0 : \n");
        }
    
    //condition SI qui permet de prendre la note mini et max 
    if (note < notemini && note >= 0)
    {
        notemini = note;
        strcpy(elevemini, prenom);
    }
    if (note > notemax && note <= 20)
    {
        notemax = note;
        strcpy(elevemax,prenom);
    }
    }
}
// si mon est i est supérieur a 0 je fait ma moyenne sinon je ne peut pas faire de moyenne
if(i > 0) {
    moyenne = somme/i;
    printf("l'eleve qui a la note maximal est : %s avec une note de : %.2f\n",elevemax, notemax);
    printf("l'eleve qui a la note minimal est : %s avec une note de : %.2f\n",elevemini, notemini);
    printf("la moyenne de classe est : %.2f\n", moyenne);
}
else {
    printf("Vous n'avez pas saisi de note\n");
}
}






