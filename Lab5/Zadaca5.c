#include <stdio.h>
void niza (int a[], int n)
{
    int i,j,k,br=0;
        for(i=0; i < n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {

                while(a[i]==a[j])
                {
                    k=j;
                    while(k<n)
                    {
                        a[k]=a[k+1];
                        k++;
                    }
                    br++;
                    n--;
                }
            }
        }
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    //return br;
}
int main()
{
    int n,i,izbrizani,a[100];

    //printf("N= ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    //izbrizani =

   niza(a,n);

    return 0;
}
