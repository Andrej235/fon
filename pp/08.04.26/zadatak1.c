#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int sum = 0;
    int count = 0;

    printf("Unesite dva cela broja: ");
    scanf("%d,%d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
            count++;
            printf("Broj %d je deljiv sa 3\n", i);
        }
    }

    printf("suma = %d, broj deljivih sa 3 = %d\n", sum, count);
    if (count > 0)
        printf("prosek = %.2f\n", (float)sum / count);
    else
        printf("Nema brojeva deljivih sa 3 u zadatom opsegu.\n");

    return 0;
}