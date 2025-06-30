
#include <bits/stdc++.h>
using namespace std;

// Insertion Sort in decreasing order
int main(){
    int n;
    cout << "Input the size of array: ";
    cin >> n;
    // Input array
    int a[n];
    cout << "Input the elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

// Insertion Sort
    for(int i= 0; i < n; i++){
        int s = a[i];
        int j = i-1;
        while(j>= 0 && a[j]<s){
            a[j+1] = a[j];
            j--;
        }

        a[j+1]=s;
    }

for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

}

