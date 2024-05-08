#include <stdio.h>

int main()
{
    int x;
    printf("input: ");
    scanf("%d", &x);

    if (x < 0)
    {
        printf("Please enter a positive number.\n");
    }

    int start = 1, end = x, result = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid * mid == x)
        {
            result = mid;
            break;
        }

        if (mid * mid < x)
        {
            start = mid + 1;
            result = mid;
        }
        else
        {
            end = mid - 1;
        }
    }

    printf("output: %d\n", result);

    return 0;
}
