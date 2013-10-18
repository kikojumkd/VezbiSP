#include <stdio.h>
#include <stdlib.h>
/* Sekundi vo casovi,minuti,sekundi
cas=3600 sec
min=60 sec
hours = seconds / SECS_PER_HOUR;
minutes = seconds / SECS_PER_MIN;
mins_left = minutes % SECS_PER_MIN;
secs_left = seconds % SECS_PER_MIN; */
int main()
{
    int cas,min,s,minutes, seconds;
    printf("Vnesi go brojot na sekundi\n");
    scanf("%d",&s);
    cas=s/3600;
    min=s/60;
    minutes=min%60;
    seconds=s%60;
    printf("%d sekundi se %d casovi, %d minuti i %d sekundi.\n",s,cas,minutes,seconds);
    return 0;
}
