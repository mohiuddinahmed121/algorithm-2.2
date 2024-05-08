
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
            end = mid - 1; // Continue searching in the left half for the first occurrence
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
            beg = mid + 1; // Continue searching in the right half for the last occurrence
        }
    }

    if (firstOccurrence != -1)
    {
        printf("The first occurrence is located at index %d.\n", firstOccurrence);
    }
    else
    {
        printf("Item is not in the list.\n");
    }

    if (lastOccurrence != -1)
    {
        printf("The last occurrence is located at index %d.\n", lastOccurrence);
    }
    else
    {
        printf("Item is not in the list.\n");
    }

    return 0;
}
