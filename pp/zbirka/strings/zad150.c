// Написати програм који пребројава колико речи има у унетом тексту (речи су одвојене знаковима ‘ ’, ‘\t’, ‘\n’).

#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[15];
    fgets(buffer, 15, stdin);

    int word_count = 1;
    for (int i = 0; buffer[i] != '\0'; i++)
    {
        if (buffer[i] == ' ')
            word_count++;
    }

    printf("Uneli ste %d reci.", word_count);
    return 0;
}