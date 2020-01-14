#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,i,mini,maxi=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    mini=min(arr[0],arr[n-1]);

    for(i=1;i<n-1;i++){
        maxi = max(arr[i],arr[i+1]);
        mini = min(mini,maxi);
    }

    cout<<mini;

    return 0;
}
