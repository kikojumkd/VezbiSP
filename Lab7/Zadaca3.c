#include <stdio.h>
#define MAX 400

/*
void sort(int *a, int n) {
    int i, sorted = 0;
    while (!sorted)
    {
        int flag = 1;
        for (i = 0; i < n; i++)
        {
            if (a[i+1] < a[i])
            {
                int temp = a[i+1];
                a[i+1] = a[i];
                a[i] = temp;
                flag = 0;
            }
        }
        sorted = flag;
    }
} // -- Ne raboti na code.finki.ukim.mk */

void sort(int *a, int n) {
    int i, j, swapped = 0;

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n-1; j++)
		{
			if(a[j] > a[j+1])
			{
				int temp = a[j+1];
				a[j+1] = a[j];
                a[j] = temp;
			}
		}
	}
}

void merge(int *a, int *b, int *c, int n) {
    int i = 0, j = 0, k = 0;

    while (i < n&&j < n)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    int l;
    if (i < n)
    {
        for (l = i; l < n; l++)
        {
            c[k++] = a[l];
        }
    }
    else
    {
        for (l = j; l < n; l++)
            c[k++] = b[l];
    }
}

int main() {
    int n;
    int a[MAX];
    int b[MAX];
    int c[MAX];
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; ++i) {
        scanf("%d", &b[i]);
    }
    sort(a, n);
    sort(b, n);
    merge(a, b, c, n);
    for(i = 0; i < 2 * n; ++i) {
        printf("%d ", c[i]);
    }
    return 0;
}
