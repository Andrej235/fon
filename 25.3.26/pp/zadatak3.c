#include <stdio.h>

int main()
{
    // izracunati povrsinu i obim pravougaonika, a i b uneti u formatu "a b"

    int a = 0;
    int b = 0;

    printf("Unesite duzine stranica pravougaonika (a b): ");
    scanf("%d %d", &a, &b);

    int obim = 2 * (a + b);
    int povrsina = a * b;

    printf("Obim pravougaonika je: %d\n", obim);
    printf("Povrsina pravougaonika je: %d\n", povrsina);

    return 0;
}