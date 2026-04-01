#include <stdio.h>

int main()
{
    int x = 0;
    printf("Unesite ceo broj: ");
    scanf("%d", &x);

    if (x > 0)
    {
        if (x % 2 == 0)
            printf("Broj %d je paran.\n", x);
        else
            printf("Broj %d je neparan.\n", x);
    }
    else
    {
        printf("Unesite broj koji je veci od 0.\n");
    }

    return 0;
}