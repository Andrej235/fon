// Написати програм који пребројава колико има простих бројева у низу.

#include <stdio.h>

int isPrime(int x)
{
    if (x < 0)
        x = -x;

    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

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

    int primes_count = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            primes_count++;
        }
    }

    printf("Broj prostih brojeva je %d.\n", primes_count);
}