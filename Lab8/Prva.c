#include <stdio.h>
#define MAX 400

int sredi(char *a, char *b)
{
    int karakteri = 0, i;
    for (i = 0; i < MAX; i++)
    {
        /*  Dokolku sme naisle na krajot na ednata
            od dvete nizi, izlezi od ciklusot.
        */
        if (*(a + i) == '\0' || *(b + i) == '\0') break;

        /*  Ako imame isti karakter na ista pozicija
            zameni so '*' i inkrementiraj go brojacot.
        */
        else if (*(a + i) == *(b + i))
        {
            *(a + i) = *(b + i) = '*';
            karakteri++;
        }
    }

    return karakteri;
}

int main()
{
    char a[MAX];
    char b[MAX];
    int i;
    gets(a);
    gets(b);

    int karakteri = sredi(a, b);

    printf("%d\n", karakteri);
    printf("%s\n", a);
    printf("%s\n", b);
    return 0;
}
