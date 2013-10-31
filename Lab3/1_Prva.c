#include<stdio.h>
int main()
{
    int den,mesec,godina;
    scanf("%d%d%d",&den,&mesec,&godina);
    if(den>0 && den<31){
    if(mesec>0 && mesec<13){
        printf("%d ",den);
         switch(mesec){
        case 1: printf("Januari");
        break;
        case 2: printf("Februari");
        break;
        case 3: printf("Mart");
        break;
        case 4: printf("April");
        break;
        case 5: printf("Maj");
        break;
        case 6: printf("Juni");
        break;
        case 7: printf("Juli");
        break;
        case 8: printf("Avgust");
        break;
        case 9: printf("Septemvri");
        break;
        case 10: printf("Oktomvri");
        break;
        case 11: printf("Noemvri");
        break;
        case 12: printf("Dekemvri");
        break;
    }
    printf(" %d",godina);
    }
    else
        printf("Ne postoi");

    }
    else
        printf("Nema mesec so %d denovi",den);
 return 0;
}
