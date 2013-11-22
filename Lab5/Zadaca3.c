#include <stdio.h>
void niza (int a[], int n)
{
    int i,j,pom;
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
            if(a[i]>a[j])
            {
                pom=a[i];
                a[i]=a[j];
                a[j]=pom;
            }
    }
}
int main()
{
    int n,i,j,pom,a[10];

    printf("N= ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    niza(a,n);//se povikuva funkcijata za da ja sortira nizata vo rastecki redosled


    for(i=0; i<n; i++)
        printf("%d \t",a[i]);

    printf("\nNajmal element vo nizata e %d",a[0]);/

    return 0;
}
