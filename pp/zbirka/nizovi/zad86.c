// Направити програм који треба од два дата низа да састави један који представља пресек.

#include <stdio.h>

int contains(int *arr, int size, int element)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return 1;
    }
    return 0;
}

int main()
{
    int n = 0;
    printf("Unesite dimenzije prvog niza: ");
    scanf("%d", &n);

    int arr1[n];
    printf("Unesi %d elemenata prvog niza (jedan po redu): \n", n);
    for (size_t i = 0; i < n; i++)
    {
        int x = 0;
        scanf("%d", &x);
        arr1[i] = x;
    }

    int m = 0;
    printf("Unesite dimenzije drugog niza: ");
    scanf("%d", &m);

    int arr2[m];
    printf("Unesi %d elemenata drugog niza (jedan po redu): \n", n);
    for (size_t i = 0; i < m; i++)
    {
        int x = 0;
        scanf("%d", &x);
        arr2[i] = x;
    }

    int res_arr_len = n + m;
    int res_arr[res_arr_len];

    for (size_t i = 0; i < n; i++)
    {
        res_arr[i] = arr1[i];
    }

    int duplicates = 0;
    for (size_t i = 0; i < m; i++)
    {
        if (contains(arr1, n, arr2[i]))
        {
            duplicates++;
            continue;
        }

        res_arr[n + i - duplicates] = arr2[i];
    }

    printf("Presek nizova je: \n");
    for (size_t i = 0; i < n + m - duplicates; i++)
    {
        if (i != 0)
            printf(", ");

        printf("%d", res_arr[i]);
    }
    printf("\n");
}