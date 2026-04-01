#include <stdio.h>

int main()
{
    int dan = 0;
    printf("Unesite broj dana u nedelji (1-7): ");
    scanf("%d", &dan);

    switch (dan)
    {
    case 1:
        printf("Ponedeljak\n");
        break;
    case 2:
        printf("Utorak\n");
        break;
    case 3:
        printf("Sreda\n");
        break;
    case 4:
        printf("Cetvrtak\n");
        break;
    case 5:
        printf("Petak\n");
        break;
    case 6:
        printf("Subota\n");
        break;
    case 7:
        printf("Nedelja\n");
        break;

    default:
        printf("Morate uneti broj od 1 do 7\n");
        break;
    }

    return 0;
}