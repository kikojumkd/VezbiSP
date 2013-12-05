#include <stdio.h>
#define MAX 100

void fixGold(int *a, int* b, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (*(a + i) > 500 && *(b + i) > 500)
        {
            *(a + i) = 0;
        }
        else if (*(a + i) > 500 && *(b + i) <= 500)
        {
            int temp = *(a + i);
            *(a + i) = *(b + i);
            *(b + i) = temp;
        }
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) scanf("%d", &b[i]);
    fixGold(a, b, n);
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    for (i = 0; i < n; i++) printf("%d ", b[i]);
    return 0;
}
