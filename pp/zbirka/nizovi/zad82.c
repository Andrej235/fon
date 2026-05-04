// Дат је низ целих бројева. Имплементирати потпрограм који у задатом низу целих бројева налази највећи парни елемент низа.

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

    int max = -__INT_MAX__;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0 && max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("Najveci parni broj u datom nizu je: %d\n", max);
}