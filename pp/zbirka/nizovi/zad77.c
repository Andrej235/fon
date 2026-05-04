// Написати процедуру за додавање новог елемента на почетак низа.
// Написати процедуру за унос n елемената у низ (обавезно искористити претходну процедуру за
// додавање новог елемента на почетак низа). Приказати садржај низа.

#include <stdio.h>

void dodavanjeEl(int *x, int *Elniza)
{
    int broj = 0; // broj = 2;
    printf("Unesite vrednost: ");
    scanf("%d", &broj);
    for (int i = *Elniza - 1; i >= 0; i--)
    {
        x[i + 1] = x[i];
    }
    (*Elniza)++;
    x[0] = broj;
}

void prikaz(int x[], int brojEl)
{
    for (int i = 0; i < brojEl; i++)
    {
        printf("%d\t", x[i]);
    }
    printf("\n\n");
}

void kopiranje(int *niz1, int size_x, int *niz2, int *size_y)
{
    for (int i = 0; i < size_x; i++)
    {
        niz2[i] = niz1[i];
        (*size_y)++;
    }
}

int main()
{

    int x[10] = {1, 2, 3, 4, 5};
    int brojEl1 = 5;

    dodavanjeEl(x, &brojEl1);
    prikaz(x, brojEl1);

    int y[10];
    int brojEl2 = 0;
    kopiranje(x, brojEl1, y, &brojEl2);

    int n = 0;
    printf("Unesite broj elemenata za niz: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        dodavanjeEl(y, &brojEl2);
    }

    prikaz(y, brojEl2);

    return 0;
}