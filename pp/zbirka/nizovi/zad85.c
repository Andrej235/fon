// Дат је низ целих бројева. Имплементирати потпрограм који у задатом низу целих бројева рачуна колико има елемената низа чија је вредност већа од средње вредности свих елемената низа.

#include <stdio.h>

int main()
{
    int n = 0;
    printf("Unesite dimenzije niza: ");
    scanf("%d", &n);

    int arr[n];
    printf("Unesi %d elemenata niza (jedan po redu): \n", n);
    for (size_t i = 0; i < n; i++)
    {
        int x = 0;
        scanf("%d", &x);
        arr[i] = x;
    }

    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    float avg = (float)sum / n;
    int bigger_than_avg_count = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] > avg)
            bigger_than_avg_count++;
    }

    printf("Broj elemenata u nizu vecih od proseka je %d\n", bigger_than_avg_count);
}