//bubble sort(ascending order)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;//size of array
    cin>>n;//input size
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int k=0;k<n-1;k++)
        {
            if(array[k]>array[k+1])
            {
                swap(array[k],array[k+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}

