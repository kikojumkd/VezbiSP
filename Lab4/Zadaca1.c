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
    int kraj=1;
    for (i=1;i<lenght-1;i++)
    {
        if ((n[i]>=n[i-1]&&n[i]<=n[i+1]) || (n[i]<=n[i-1] && n[i]>=n[i+1]))
        {
            kraj=0;
            break;
        }
    }
    if (kraj)
    {
        printf ("YES");
    }else
    {
        printf ("NO");
    }
}
