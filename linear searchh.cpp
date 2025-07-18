#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k,index=-1; //k=key
    cin>>k; //key taken as input
    cout<<"input key"<<endl;
    int n; //n=size
    cin>>n; //size of array as input
    cout<<"input size"<<endl;

    int a[n]; //array te size koto ache
    for(int i=0;i<n;i++)
    {
        cin>>a[i];//koto no index k call korchi
    }
    for(int i=0;i<n;i++){

        if(a[i]==k){  //"i" num element k er equal hoile key found
            index=i;
            cout<<"key found at "<<index<<endl;
        }
    }
    if(index==-1)
    {
        cout<<"key not found"<<endl;
    }
    return 0;

}
