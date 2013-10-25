#include<stdio.h>
int main()
{
    int Lt,Lk, a,b,c,d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    Lt=a+b+c;
    Lk=4*d;
    if(Lt>Lk)
    printf("Triagolnikot ima pogolem perimetar.");
    else{
    if(Lk>Lt)
    printf("Kvadratot ima pogolem perimetar.");
    else
    printf("Imaat isti perimetri.");
    }
    return 0;
}
