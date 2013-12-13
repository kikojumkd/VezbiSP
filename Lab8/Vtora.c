#include <stdio.h>
#define MAX 400

int sredi(char *a)
{
    int zborovi = 0, i;
    char prvChar = a[0];
    for (i = 0; i < MAX; i++)
    {
        /*  Ako sme naisle na prazno mesto ili
            krajot na stringot, probuvame da
            proverime dali zborot pocnuva
            i za vrsuva na ist akrakter.
        */
        if (a[i] == ' ' || a[i] == '\0')
        {
            /*  Ako ocetniot karakter na posledniot
                izbrojan zbor, i negoviot posleden
                karakter se ednakvi - inkrementiraj
                go brojacot na zborovi.
            */
            if (a[i-1] == prvChar) zborovi++;

            /*  Ako sme na krajot na stringot
                izlezi od ciklusot.
            */
            if (a[i] != '\0') prvChar = a[i+1];
            else break;
        }
    }

    return zborovi;
}

int main()
{
    char a[MAX];
    int i;
    gets(a);

    int zborovi = sredi(a);

    printf("%d\n", zborovi);
    return 0;
}
