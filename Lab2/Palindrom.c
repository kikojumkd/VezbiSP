#include<stdio.h>
int main()
{
    int broj;
    scanf("%d", &broj);
   if (broj<100)
    printf("Wrong Input");
    else if (broj>999)
    printf("Wrong Input");
    else
    {
    if(broj%10==broj/100)
    printf("Brojot e palindrom");
    else
    printf("Brojot ne e palindrom");
    }
    return 0;
}
