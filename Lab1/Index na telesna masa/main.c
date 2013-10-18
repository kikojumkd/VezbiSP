#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*BMI=masa/visina`2*/
    int masa,visinacm;
    float BMI, visinam;
    printf("Vnesete ja vashata masa\n");
    scanf("%d",&masa);
    printf("Vnesete ja vashata visina vo centimetri\n");
    scanf("%d", &visinacm);
    visinam=visinacm/100.0;
    printf("Vashata visina izrazena vo metri e %.2f\n", visinam);
    BMI=masa/(visinam*visinam);
    printf("Vashiot index na telesna masa iznesuva %.2f\n",BMI);
    return 0;

}
