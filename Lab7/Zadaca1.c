#include <stdio.h>

int zaemnoProsti(int a, int b) {
    int temp, i, flag = 0;
    if(b == 0 || a == 0)
        return 0;

    if(b > a){
        temp = b;
        b = a;
        a = temp;
    }

    for(i = 2; i <= b; i++){
        if(a % i == 0 && b % i == 0){
            flag = 1;
            break;
        }
    }

    if(flag)
        return 0;
    else
        return 1;
}

void zameni(int* a, int n)
{
    int i;
    for (i = 0; i < n-1; i++)
    {
        if (zaemnoProsti(*(a + i), *(a + i + 1)))
        {
            int temp = *(a + i);
            *(a + i) = *(a + i + 1);
            *(a + i + 1) = temp;
            i++; // Ne vrsi zamena dvapati za ist element;
        }
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int niza[n];
    for (i = 0; i < n; i++) scanf("%d", &(*(niza + i)));
    zameni(niza, n);
    for (i = 0; i < n; i++) printf("%d ", *(niza + i));

    return 0;
}
