#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr[]={10,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result="";
    int maxi=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            int result=result+to_string[arr[j]];
            int maxi=max(result,maxi);
        }
    }
    cout<<max<<endl;
}
