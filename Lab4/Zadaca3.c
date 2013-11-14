#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n[100];
    int lenght;
    scanf ("%d",&lenght);
    float num1,num2;
    scanf ("%f%f",&num1,&num2);
    int i;
    n[0]=num1;
    n[1]=num2;
    printf ("%.2f ",num1);
    printf ("%.2f ",num2);
    float sum=num1+num2;
    for (i=2;i<lenght;i++)
    {
        float k;
        k=sum/2;
        n[i]=sum/2;
        sum+=n[i];
        printf ("%.2f ",k);

    }

}
