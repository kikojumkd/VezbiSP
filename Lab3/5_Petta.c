 #include <stdio.h>

int main()
{
char c=' ';
int zbir=0;
int m=0;
int k=0;
while (c!='.')
{
c=getchar();
if (c>='0' && c<='9' && k==0)
{
m=c-'0';
k=1;
}else if (c>='0' && c<='9' && k==1)
{
m=m*10+(c-'0');
}else
{
k=0;
zbir+=m;
m=0;
}

}
printf ("%d",zbir);
}
