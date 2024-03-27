#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-2,0,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=0;
    for(int i=0;i<n;i++){
        int product=1;
        for(int j=i;j<n;j++){
            product=product*arr[j];
            maxi=max(maxi,product);
        }
    }
    cout<<maxi<<endl;
}