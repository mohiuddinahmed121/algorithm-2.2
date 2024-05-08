#include <bits/stdc++.h>
using namespace std;

int partitions(int a[], int l, int h)
{
    int i, j, pivot;
    pivot = a[l];
    i = l;
    j = h;
    while (i < j)
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
            swap(a[i], a[j]);
    }
    swap(a[l], a[j]);
    return j;
}

void quickSort(int a[], int l, int h)
{

    if (l < h)
    {
        int j = partitions(a, l, h);
        quickSort(a, l, j - 1);
        quickSort(a, j + 1, h);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    // input array values
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // quick sort function call
    quickSort(arr, 0, n - 1);

    // print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}