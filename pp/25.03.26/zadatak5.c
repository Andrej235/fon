#include <stdio.h>

int main()
{
    char A = 'A';
    char a = 'a';

    printf("Razlika izmedju velikog i malog slova: %d\n", a - A);

    char d = 'd';
    char i = 'i';
    char n = 'n';
    printf("%c%c%c\n", d, i, n);
    printf("%c%c%c\n", d - 32, i - 32, n - 32);

    return 0;
}