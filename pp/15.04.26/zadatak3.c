#include <stdio.h>

void povecajZaDva(int *n)
{
    *n += 2;
}

int main()
{
    int n = 5;
    povecajZaDva(&n);
    printf("%d\n", n);
    return 0;
}