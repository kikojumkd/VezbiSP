#include<stdio.h>
int main()
{
    int m,n,i,pom,proizvod,brojac=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<n;i++)
    {
        pom=i;
        proizvod=1;
        while(pom>0)
            {
                if((pom%10)%3==0)
                {
                    proizvod=proizvod*(pom%10);
                }
                pom=pom/10;
            }
        if(proizvod>5 && proizvod%4==0)
        {
            brojac++;
            printf("%d\n",i);
        }
    }
    printf("vkupno %d",brojac);
    return 0;
}
