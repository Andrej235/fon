#include <stdio.h>

int main()
{
    int x = 135;

    int stotine = x / 100;
    int desetice = (x % 100) / 10;
    int jedinice = x % 10;

    if (stotine < desetice && desetice < jedinice)
        printf("Cifre su u rastućem redosledu.\n");
    else
        printf("Cifre nisu u rastućem redosledu.\n");

    return 0;
}