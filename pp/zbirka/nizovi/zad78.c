// Написати програм где корисник уноси димензију низа, а затим и сваки елемент појединачно. На крају исписати тај низ.

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

    printf("\nUneti niz: ");
    for (size_t i = 0; i < n; i++)
    {
        if (i != 0)
            printf(", %d", arr[i]);
        else
            printf("%d", arr[i]);
    }
    printf("\n");
}