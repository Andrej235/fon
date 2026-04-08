#include <stdio.h>

int main()
{
    int broj = 1245;
    int cifra1 = 0;
    int suma = 0;

    while (broj)
    {
        cifra1 = broj % 10;
        suma += cifra1;
        broj /= 10;

        printf("Suma cifara je: %d\n", suma);
    }
}