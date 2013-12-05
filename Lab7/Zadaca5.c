#include <stdio.h>
#define MAX 100

int suma(int *a,int n){
    int i, suma = 0;
    for (i = 0; i < n; i++)
        if (a[i] % 2 == 0) suma += a[i];
    return suma;
}

int main() {
    int n, i;
    scanf("%d", &n);
    int niza[n];
    for (i = 0; i < n; i++) scanf("%d", &niza[i]);
    printf("%d", suma(niza, n));

    return 0;
}
