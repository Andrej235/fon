// Написати програм који пребројава колико у датом низу има парних бројева већих од одређеног броја p који је унет.

#include <stdio.h>

int main()
{
    int n = 0;
    printf("Unesite dimenzije niza: ");
    scanf("%d", &n);

    int arr[n];
    printf("Unesi %d elemenata niza (jedan po redu): \n", n);
    for (size_t i = 0; i < n; i++)
    {
        int x = 0;
        scanf("%d", &x);
        arr[i] = x;
    }

    int p = 0;
    printf("Unesite p: ");
    scanf("%d", &p);

    int even_count = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] > p && arr[i] % 2 == 0)
        {
            even_count++;
        }
    }

    printf("U datom nizu ima %d parnih brojeva vecih od %d.\n", even_count, p);
}