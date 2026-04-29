#include <stdio.h>

void meni();
void unijanizova(int niz1[], int n1, int niz2[], int n2, int niz3[], int *n3);

int da_li_postoji(int niz[], int n, int broj)
{
    for (int i = 0; i < n; i++)
    {
        if (niz[i] == broj)
        {
            return 1;
        }
    }
    return 0;
}

int dodaj_na_kraj(int niz[], int *n, int broj)
{
    niz[*n] = broj;
    (*n)++;
}

void ispisi_niz(int *niz, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(niz + i));
    }
    printf("\n");
}

int main()
{
    meni();

    return 0;
}
void meni()
{
    int opcija;
    do
    {
        printf("          Meni       \n");
        printf("------------------------\n");
        printf("1. Unija dva niza, bez ponavljanja\n");
        printf("2. Formiraj niz b\n");
        printf("3. Proizvod elemenata niza izmedju prvih pojavljivanja vrenosti a i b\n");
        printf("O. Kraj rada\n");
        printf("Unesite ocpiju: ");
        scanf("%d", &opcija);

        switch (opcija)
        {
        case 1:
            int x[6] = {5, 4, 7, 8};
            int nx = 4;
            int y[3] = {1, 4, 8};
            int ny = 3;
            int z[20];
            int nz = 0;
            unijanizova(x, nx, y, ny, z, &nz);
            printf("1. opcija\n");
            printf("Niz x: ");
            ispisi_niz(x, nx);
            printf("Niz y: ");
            ispisi_niz(y, ny);
            printf("Unija nizova x i y: ");
            ispisi_niz(z, nz);

            break;

        case 2:
            printf("2. opcija\n");
            break;

        case 3:
            printf("3. opcija\n");
            break;

        case 0:
            printf("Kraj rada\n");
            return;
        }

    } while (opcija != 0);
}

void unijanizova(int niz1[], int n1, int niz2[], int n2, int niz3[], int *n3)
{
    for (int i = 0; i < n1; i++)
    {
        if (!da_li_postoji(niz3, *n3, niz1[i]))
        {
            dodaj_na_kraj(niz3, n3, niz1[i]);
        }
    }
    for (int i = 0; i < n2; i++)
    {
        if (!da_li_postoji(niz3, *n3, niz2[i]))
        {
            dodaj_na_kraj(niz3, n3, niz2[i]);
        }
    }
}
