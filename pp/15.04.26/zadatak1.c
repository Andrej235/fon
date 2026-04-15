#include <stdio.h>

void ispisiNZnakova(char znak, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", znak);
    }
}

int main()
{
    ispisiNZnakova('-', 3);
    ispisiNZnakova('*', 3);

    printf("\n");

    ispisiNZnakova('-', 3);
    ispisiNZnakova('*', 3);
}
