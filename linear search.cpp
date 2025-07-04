//Linear Search
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, index = -1;
    cout << "Input key: ";
    cin >> k;
    cout << "Input array size: ";
    cin >> n;
    int array[n];
    cout << "Input array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] == k)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << k << " is found at " << index << " position" << endl;
    }
    return 0;
}

