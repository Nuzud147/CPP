#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,index=-1;
    cin>>x;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==x){
            index=i;
            cout<<"x is found in the array "<<index<<'\n';
        }
    }
    if (index==-1)
    {
        cout<<"x is not found"<<'\n';
    }
    return 0;
}
