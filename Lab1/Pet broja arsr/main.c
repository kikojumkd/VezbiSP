#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,f;
    float ar;
    printf("Vnesi 5 ocenki od 6-10\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&f);
    ar=(a+b+c+d+f)/5.0;
    printf("Vashiot sreden uspeh e: %.3f\n",ar);
    return 0;
}
