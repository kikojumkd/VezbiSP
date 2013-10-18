#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Vnesi dva broja:\n");
    printf("a= ");
    scanf("%d", &a);
    printf("\n");
    printf("b= ");
    scanf("%d", &b);
    printf("\n");
    printf("Zbirot na tie dva broja e %d, razlikata e %d, proizvodot od tie broevi e %d, delenjeto e %.3f i ostatokot e %d",a+b, a-b, a*b,a/(b*1.0),a%b);
    return 0;
}
