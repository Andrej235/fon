#include <stdio.h>

int main()
{
    printf("Unesite ceo broj: ");
    int x = 0;
    scanf("%d", &x);
    printf("Uneli ste broj: %d\n", x);

    char c = 0;
    printf("Unesite karakter: ");
    scanf(" %c", &c);
    printf("Uneli ste karakter: %c\n", c);

    return 0;
}
