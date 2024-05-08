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
    printf("Enter a number: ");
    scanf("%d", &key);

    int mid, beg = 0, end = n, loc = -1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (key < L[mid])
        {
            end = mid - 1;
        }
        else if (key > L[mid])
        {
            beg = mid + 1;
        }
        else if (key == L[mid])
        {
            loc = mid;
            printf("Found at index: %d", loc);
            break;
        }
    }
    if (loc == -1)
    {
        printf("Item is not in List");
    }
    return 0;
}