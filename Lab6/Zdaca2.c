
int obr(int n)
{
if(n==0)
return 0;
if(n>99)
return(n%100)+obr(n/10);
else
return(n%100)+obr(n/100);
}
int main()
{
int n;
scanf("%d",&n);
printf("%d",obr(n));
return 0;
}
