#include <stdio.h>
#include <math.h>

int masterTheorem(int a, int b, int k, int n)
{
    if (n == 1)
    {
        return k;
    }
    else
    {
        return a * masterTheorem(a, b, k, n / b);
    }
}

int main()
{
    int a, b, k, n;

    printf("Enter the values for a, b, k, n: ");
    scanf("%d %d %d %d", &a, &b, &k, &n);

    double log_b_a = log((double)a) / log((double)b);

    if (log_b_a == k)
    {
        printf("The solution is: Theta(n^%lf)\n", log_b_a);
    }
    else if (log_b_a < k)
    {
        printf("The solution is: Theta(n^%d)\n", k);
    }
    else
    {
        printf("The solution is: Theta(n^%lf)\n", log_b_a);
    }

    return 0;
}