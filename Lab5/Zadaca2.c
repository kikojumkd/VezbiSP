#include <stdio.h>
int proizvod (int broj)
{
    int i=1,pro=1,parcifra=1;

    while(broj!=0)
    {
        pro=broj%10;
        broj=broj/10;
        if(i%2==0)
        {
            parcifra=parcifra*pro;
        }
        i++;
    }
    return parcifra;
}

int main()
{
    int n;

    printf("Broj= ");
    scanf("%d",&n);
    printf("Proizvodot na parnite cifri e %d",proizvod(n));

    return 0;
}
