#include<stdio.h>
#include <stdlib.h>
int main()
{
     int i,n,k=0,eden=0,dva=0,pet=0,deset=0,pedeset=0,sto=0,petsto=0,iljada=0,petiljadi=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==1*k)
        {
            eden++;
            k++;
        }
        if(eden==5)
        {
            pet++;
            eden=0;
        }
        if(pet==2)
        {
            deset++;
            pet=0;
        }
        if(deset==5)
        {
            pedeset++;
            deset=0;
        }
        if(pedeset==2)
        {
            sto++;
            pedeset=0;
        }
        if(sto==5)
        {
            petsto++;
            sto=0;
        }
        if(petsto==2)
        {
            iljada++;
            petsto=0;
        }
        if(iljada==5)
        {
            petiljadi++;
            iljada=0;
        }
    }
    dva=eden/2;
    printf("petiljadi= %d; iljada= %d; petsto= %d; sto= %d; pedeset= %d; deset= %d; pet= %d, dva= %d, eden= %d",petiljadi,iljada,petsto,sto,pedeset,deset,pet,dva,eden-(dva*2));
    return 0;
}
