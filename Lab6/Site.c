// 1-va - po nivno (mislam)
int fact(int n)
{
    if (n <= 0) return 1;

    return n * fact(n-2);
}

int main()
{
    int n;
    scanf("%d", &n);
	printf("%d", fact(n));
    return 0;
}


// 2-ra - po moe
int proizvodCifri(int n)
{
    if (n == 0) return 1;
    return n % 10 * proizvodCifri(n / 10);
}

int main()
{
    int n;
    scanf("%d", &n);
	printf("%.2f", proizvodCifri(n) / (float)n);


    return 0;
}


// 3-ta - po moe
int dvocifreni(int n)
{
    if (n / 10 == 0) return 0;
    return n % 100 + dvocifreni(n / 10);
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n / 10 == 0 ) printf("%d", n);
    else printf("%d", dvocifreni(n));

    return 0;
}

// 4-ta (od nivniot daden templejt)
void izmini_rek(int a[], int n){
    printf("%d ", a[--n]);
    if (n > 0) izmini_rek(a, n);
}

int main() {
    int a[100], i, n;
    scanf("%d",&n);

    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    izmini_rek(a,n);

    return 0;
}
