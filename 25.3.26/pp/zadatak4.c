#include <stdio.h>

int main()
{
    double kurs = 0;
    double iznosUDinarima = 0;
    int iznosUEvrima = 0;

    printf("Unesite kurs evra: ");
    scanf("%lf", &kurs);

    printf("Unesite iznos u evrima: ");
    scanf("%d", &iznosUEvrima);

    iznosUDinarima = iznosUEvrima * kurs;
    printf("Iznos u dinarima: %.2lf\n", iznosUDinarima);

    return 0;
}