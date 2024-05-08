#include <stdio.h>
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array element: ");
    int L[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &L[i]);
    }

    int key;
    printf("Enter a teget element: ");
    scanf("%d", &key);

    int firstOccurrence = -1, lastOccurrence = -1;
    int beg = 0, end = n - 1;

    while (beg <= end)
    {
        int mid = (beg + end) / 2;

        if (key < L[mid])
        {
            end = mid - 1;
        }
        else if (key > L[mid])
        {
            beg = mid + 1;
        }
        else
        {
            firstOccurrence = mid;
            end = mid - 1;
        }
    }

    beg = 0;
    end = n - 1;

    while (beg <= end)
    {
        int mid = (beg + end) / 2;

        if (key < L[mid])
        {
            end = mid - 1;
        }
        else if (key > L[mid])
        {
            beg = mid + 1;
        }
        else
        {
            lastOccurrence = mid;
            beg = mid + 1;
        }
    }

    if (firstOccurrence != -1)
    {
        printf("The first occurrence of element %d is located at index %d.\n", key, firstOccurrence);
    }
    else
    {
        printf("Element not found in the array.\n");
    }

    if (lastOccurrence != -1)
    {
        printf("The last occurrence of element %d is located at index %d.\n", key, lastOccurrence);
    }
    else
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}
