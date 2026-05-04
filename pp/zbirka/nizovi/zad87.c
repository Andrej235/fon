// Направити програм који треба од датог низа а да направи два низа – b и c, тако да b садржи парне елементе низа а, а c непарне.

#include <stdio.h>

void izdvojParneElemente(int a[], int n, int parni[], int *parni_len)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            parni[*parni_len] = a[i];
            (*parni_len)++;
        }
    }
}

void izdvojNeparneElemente(int a[], int n, int neparni[], int *neparni_len)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            neparni[*neparni_len] = a[i];
            (*neparni_len)++;
        }
    }
}

void prikazi(int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", x[i]);
    }
    printf("\n\n");
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5};
    int n = 5;

    int b[10];
    int b_n = 0;
    izdvojParneElemente(a, n, b, &b_n);
    prikazi(b, b_n);

    int c[10];
    int c_n = 0;
    izdvojNeparneElemente(a, n, c, &c_n);
    prikazi(c, c_n);

    return 0;
}