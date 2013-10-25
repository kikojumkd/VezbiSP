#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && b>c && a>c)
    printf("%d %d %d", a, b, c);
    else if(b>a && c>a && b>c)
    printf("%d %d %d", b, c, a);
    else if(a>b && c>b && a>c)
    printf("%d %d %d", a,c,b);
    else if (c>a && c>b && a>b)
    printf("%d %d %d",c,a,b);
    else if(c>a && c>b &&b>a)
    printf("%d %d %d",c,b,a);
    else if(b>a && b>c &&a>c)
    printf("%d %d %d",b,a,c);
    return 0;
}
