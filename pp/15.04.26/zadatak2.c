#include <stdio.h>

int daLiJeProst(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int ispisatiTrocifreneProsteBrojeve()
{
    for (int i = 100; i < 1000; i++)
    {
        if (daLiJeProst(i))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    ispisatiTrocifreneProsteBrojeve();
    return 0;
}