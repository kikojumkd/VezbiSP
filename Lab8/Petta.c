#include <stdlib.h> // free, malloc
#include <stdio.h> // printf, scanf, puts, gets
#include <string.h> // za manipulacija so stringovi
#define MAX 400

int sredi(char* str1, char* str2)
{
    char* ss = strstr(str1, str2);
    char* i = str1;
    char* j = str1;
    int brojac = 0;

    while (ss)
    {
        i = str1;
        j = str1;
        while(*j)
        {
            *i = *j++;
            int index = j - str1;
            int pozicijaSS = ss - str1;
            pozicijaSS += 1;
            if (index < pozicijaSS || index > pozicijaSS+strlen(str2)-1)
                i++;
        }
        *i = 0;
        ss = strstr(str1, str2);
        brojac++;
    }

    return brojac;
}

int main()
{
    char* a = (char*)malloc(MAX);
    char* b = (char*)malloc(MAX);
    gets(a);
    gets(b);

    int pojavuvanja = sredi(a, b);

    printf("%s\n", a);
    printf("%d\n", pojavuvanja);

    free(a);
    free(b);
    return 0;
}
