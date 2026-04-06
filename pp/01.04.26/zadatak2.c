#include <stdio.h>

int main()
{
    int temp = 0;
    printf("Unesite temperaturu: ");
    scanf("%d", &temp);

    if (temp < 10)
    {
        printf("Vreme je hladno.\n");
    }
    else if (temp >= 10 && temp <= 18)
    {
        printf("Vreme je umereno.\n");
    }
    else if (temp > 18 && temp <= 25)
    {
        printf("Vreme je prijatno\n");
    }
    else
    {
        printf("Vreme je toplo.\n");
    }

    return 0;
}