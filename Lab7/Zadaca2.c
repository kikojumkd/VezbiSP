#include<stdio.h>
void desno(int *a,int n)
{
    int i,pom=*(a+n-1);
        for (i=n-1;i>0;i--)
            *(a+i)=*(a+i-1);
              *a=pom;
}
void levo(int *a,int n)
{
    int i,k=*a;
    for(i=0;i<n-1;i++)
        *(a+i)=*(a+i+1);
        *(a+n-1)=k;
}
int main()
{
    int m,n,a[100],k,i;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    k=m;

if(m>0)

    while(k)
    {
        desno(a,n);
        k--;
}
    else{

    while(k)
    {
        levo(a,n);
        k++;
}
    }

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
