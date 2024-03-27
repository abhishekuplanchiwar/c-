#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
// void print(int arr[],int n,int idx,int max){
//     if(idx==n){
//         cout<<max<<endl;
//         return;
//     }
    
//     if(arr[idx]>max)max=arr[idx];
//     print(arr,n,idx+1,max);
// }
int maxprint(int arr[],int n,int idx){
    if(idx==n){
        return INT_MIN;
    }
    
    return max(arr[idx],maxprint(arr,n,idx+1));
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    
    int n=sizeof(arr)/sizeof(arr[0]);
     print(arr,n,0);
}