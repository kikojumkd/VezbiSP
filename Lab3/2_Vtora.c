#include<stdio.h>
int main()
{
    int z,a,b,brojac=0;
    float procent=0,br=0;
    scanf("%d",&z);
    while(a!=0 && b!=0)
    {
        scanf("%d%d",&a,&b);
        br++;
        if(z==a+b)
        {
            brojac++;
        }
        else if(a!=0 && b!=0){
        br--;
        }
    }
    procent=(brojac/br)*100;
    printf("%d pati i %.2f procenti",brojac,procent);
    return 0;
}
