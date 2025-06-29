//Merge Sort

#include <bits/stdc++.h>

using namespace std;
int ar[100];
int b[100];
void merging(int low, int mid, int high)
{
    int i = low, l1 = low, l2 = mid + 1;
    while (l1 <= mid && l2 <= high)
    {
        if (ar[l1] <= ar[l2])
        {
            b[i] = ar[l1];
            l1++;
        }
        else
        {
            b[i] = ar[l2];
            l2++;
        }
        i++;
    }
    while (l1 <= mid)
    {
        b[i] = ar[l1];
        i++;
        l1++;
    }
    while (l2 <= high)
    {
        b[i] = ar[l2];
        i++;
        l2++;
    }
    for (i = low; i <= high; i++)
    {
        ar[i] = b[i];
    }
}

void mergeSort(int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    mergeSort(low, mid);
    mergeSort(mid + 1, high);
    merging(low, mid, high);
}

int main()
{
    int n;
    cout << "Input size of array: ";
    cin >> n;

    cout << "Input elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    mergeSort(0, n-1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}

