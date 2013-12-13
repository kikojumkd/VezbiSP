#include <stdio.h>
#define MAX 400

int dodaj(char* a, char* b, int pozicija)
{
    int i, j;

    int dolzinaA = strlen(a);
    int dolzinaB = strlen(b);

    /*  Gi pomestuvame karakterite od krajot
        na stringot do dadenata pozicija nadesno
        za 'dolzinaB' mesta - praveme mesto za
        stringot B.
    */
    for (i = dolzinaA; i >= pozicija; i--)
    {
        *(a + (i+dolzinaB)) = *(a + i);
    }

    /*  Go potpolnuvame mestoto sto go napravivme
        so sodrzinata od stringot B.
    */
    for (j = 0, i = pozicija; j < dolzinaB; j++, i++)
    {
        *(a + i) = *(b + j);
    }

    return 0;
}

int main()
{
    char a[MAX], b[MAX];
    int i, poz;
    gets(a);
    gets(b);
    scanf("%d", &poz);
    dodaj(a, b, poz);

    printf("%s\n", a);
    return 0;
}
