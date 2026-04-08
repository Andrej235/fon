#include <stdio.h>

int main()
{
    int limit = 0;
    printf("Unesite gornju granicu: ");
    scanf("%d", &limit);

    int sum = 0;
    {
        int x = 0;
        printf("Unesite broj: ");
        scanf("%d", &x);

        sum += x;
    }

    printf("Suma je dostigla ili premašila gornju granicu.\n");
}