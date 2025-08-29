//Binary Search
#include <bits/stdc++.h>
using namespace std;

int binary(int array[], int starting_index, int ending_index, int key)
{
    while (starting_index <= ending_index)
    {
        int mid = (starting_index + ending_index) / 2;

        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] < key)
        {
            starting_index = mid + 1;
        }
        else
        {
            ending_index = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int k, s;
    cout << "Input Key: ";
    cin >> k;
    cout << "Input Array size: ";
    cin >> s;

    int a[s];
    cout << "Input Array Elements: \n";

    for(int i = 0; i < s; i++)
    {
        cin >> a[i];
    }

    sort(a, a + s);

    int result = binary(a,0,s-1,k);
    if(result == -1){
        cout << "Not Found\n";
    }
    else{
        cout << "Found at index " << result << '\n';
    }

    return 0;
}
