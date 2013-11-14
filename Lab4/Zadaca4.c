#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j;
   int k;
   int matrica[100][100];
   int lenght;
   scanf ("%d",&lenght);

   for (i=0;i<lenght;i++)
   {
       for (j=0;j<lenght;j++)
       {
           int r;
           scanf ("%d",&r);
           matrica[i][j]=r;
       }
   }

   for (i=0;i<lenght;i++)
   {
       for (j=0;j<lenght;j++)
       {
           int sum=0;
           for (k=0;k<lenght;k++)
                sum+=matrica[i][k]*matrica[k][j];
            printf ("%d ",sum);
       }
       printf ("\n");

   }
   return 0;
}
