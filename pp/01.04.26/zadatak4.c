#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    char znak = 'x';

    printf("Unesite cele brojeve: ");
    scanf("%d %d", &x, &y);

    printf("Unesite znak operacije (+, -, *, /): ");
    scanf(" %c", &znak);

    switch (znak)
    {
    case '+':
        printf("Rezultat: %d\n", x + y);
        break;
    case '-':
        printf("Rezultat: %d\n", x - y);
        break;
    case '*':
        printf("Rezultat: %d\n", x * y);
        break;
    case '/':
        if (y != 0)
            printf("Rezultat: %.2f\n", (double)x / y);
        else
            printf("Deljenje nulom nije dozvoljeno.\n");
        break;
    default:
        printf("Nepoznata operacija.\n");
        break;
    }

    return 0;
}