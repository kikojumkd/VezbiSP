#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf ("%d%d",&n,&m);
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (i==0 || i==n-1)
            {
                printf ("+");
                continue;
            }
            if (j==0 || j==m-1)
            {
                printf ("+");
                continue;
            }
            printf ("-");
        }
        printf ("\n");
    }

}
