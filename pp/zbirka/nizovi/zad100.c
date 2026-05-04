/*
    Дат је низ целих бројева. Имплементирати следеће потпрограме:
    // а) Имплементирати функцију која рачуна фреквенцију појављивања неког броја у низу.
    // б) Имплементирати функцију која приказује елементе низа који се у низу појављују тачно два пута. Сваки елемент приказати само једанпут.
*/

#include <stdio.h>

int calculateFrequency(int a[], int n, int x)
{
    int frequency = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            frequency++;
        }
    }

    return frequency;
}

int main()
{
    int a[100] = {59, 41, 47, 56, 11, 92, 56, 32, 62, 80, 72, 36, 65, 21, 98, 2, 67, 71, 42, 60, 64, 90, 5, 78, 98, 67, 71, 60, 16, 15, 81, 83, 6, 20, 93, 9, 22, 28, 17, 11, 30, 61, 60, 88, 77, 4, 16, 59, 12, 96, 68, 46, 58, 53, 84, 94, 7, 29, 35, 11, 56, 80, 82, 25, 88, 79, 99, 17, 2, 67, 61, 29, 93, 87, 33, 82, 22, 44, 83, 18, 67, 86, 56, 98, 27, 16, 55, 48, 85, 34, 2, 58, 92, 88, 59, 3, 70, 22, 45, 22};
    int n = 100;

    int x = 0;
    printf("Unesite broj: ");
    scanf("%d", &x);

    printf("Broj %d se pojavljuje %d puta u nizu\n", x, calculateFrequency(a, n, x));

    int seen[100];
    int seen_count = 0;

    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        if (calculateFrequency(a, n, x) == 2)
        {
            int found = 0;
            for (int j = 0; j < seen_count; j++)
            {
                if (seen[j] == x)
                {
                    found = 1;
                    break;
                }
            }

            if (found)
                continue;

            printf("%d\n", x);
            seen[seen_count] = x;
            seen_count++;
        }
    }

    return 0;
}