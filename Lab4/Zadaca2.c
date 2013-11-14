#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[100];
    int lenght;
    scanf ("%d",&lenght);
    int i;
    for ( i=0;i<lenght;i++)
    {
        int k;
        scanf ("%d",&k);
        n[i]=k;
    }
    int cycle;
    scanf ("%d",&cycle);

    for (i=0;i<lenght;i++)
    {
        if (cycle>0)
        {
            int k=i;
            int l=0;
            int c=i+cycle;
            int pp=0;
            while(c%lenght==0&&l<lenght)
            {
                pp=1;
                int r=n[k];
                printf ("%d ",r);
                l++;
                k++;
                if (k>=lenght)
                {
                    k=0;
                }

            }
            if (pp)break;
        }else if (cycle<0)
        {
            int k=i;
            int l=0;
            int c=i+cycle;
            c*=-1;
            int pp=0;
            while(c%lenght==0 && l<lenght)
            {
                int r=n[k];
                printf ("%d ",r);
                l++;
                k++;
                if (k>=lenght)
                {
                    k=0;
                }
            pp=1;
            }
            if (pp)break;

        }else
        {
            int k;
            for (k=0;k<lenght;k++)
            {
                int r=n[k];
                printf ("%d ",r);

            }
            break;
        }
    }
    return 0;
}
