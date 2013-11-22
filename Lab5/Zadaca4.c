#include <stdio.h>

int main()
{
    int n,i,j,k,br1,svrten,clonebr1,pom,a[10],b[10];

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        pom=a[i];
        br1=0;
        svrten=0;
        while(a[i]!=0)
        {
            a[i]/=10;
            br1++;
        }
        clonebr1=br1;
        while(br1!=0)
        {
            b[br1-1]=pom%10;
            pom/=10;
            br1--;
        }
        for(j=0; j<3; j++)
        {
            pom=b[0];
            for(k=0; k<clonebr1; k++)
            {

                b[k]=b[k+1];
            }
            b[clonebr1-1]=pom;
        }
        for(j=0; j<clonebr1; j++)
        {
            a[i]=(a[i] * 10) + b[j];
            printf("%d",svrten);
        }
        printf("%d",svrten);
    }

    return 0;
}
