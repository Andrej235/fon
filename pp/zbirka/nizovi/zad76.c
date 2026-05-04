// Написати процедуру која омогућава кориснику да са стандардног улаза унесе произвољан
// број бројева, а само парне бројеве складишти у низу. Написати процедуру за приказ
// елемената низа.

#include <stdio.h>

void printArr(int *arr, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        if (i != 0)
            printf(", ");

        printf("%d", arr[i]);
    }
    printf("\n");
}

void inputAndPrint()
{
    int arr[100];
    int n = 0;

    while (1)
    {
        int x = 0;
        printf("Unesi broj (ili neko slovo za kraj): ");
        int success = scanf("%d", &x);
        if (!success)
            break;

        if (x % 2 == 0)
        {
            arr[n] = x;
            n++;
        }
    }

    printArr(arr, n);
}

int main()
{
    inputAndPrint();
    return 0;
}