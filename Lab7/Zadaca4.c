#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int niza[n];
    for (i = 0; i < n; i++) scanf("%d", &niza[i]);
    for (i = n-1; i >= 0; --i) printf("%d ", *(niza + i));

    return 0;
}
