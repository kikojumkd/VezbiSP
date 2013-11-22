#include <stdio.h>
int najgolemzd(int m,int n)
{
    int pom,nzd,i;
    if(n > m)
    {
        pom=n;
    }
    else
    {
        pom=n;
        n=m;
        m=pom;
    }
    for(i=1; i<n; i++)
        if(n%i==0&&m%i==0)
            nzd=i;
    return nzd;
}
int main()
{
    int a,b;
    printf("A= ");
    scanf("%d",&a);
    printf("B= ");
    scanf("%d",&b);
    printf("Najgolem Zaednicki Delitel e %d",najgolemzd(a,b));
    return 0;
}
