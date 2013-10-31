#include<stdio.h>
int main()
{
    int n,i,j,zbir=0,max=0,najgolem=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<i;j++)
        {
            if(i%j==0){
            zbir=zbir+j;
            }
        }
        if(max<zbir)
        {
            max=zbir;
            najgolem=i;
        }
    printf("%d ZBIR\n",zbir);
    zbir=0;
    }
    printf("%d NAJGOLEM\n",najgolem);
    return 0;
}
