#include <stdio.h>

int main()
{
    int temperature;

    printf("Entre la température de l'eau: ");
    scanf("%d", &temperature);

    if (temperature < 0)
    {
        printf("Leau est solide");
    }
    else if (temperature > 100)
    {
        printf("l'eau est gazeuse");
    }
    else 
    {
        printf("l'eau est liquide");
    }
    return(0);
}