#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int n,int idx){
    if(idx==n)return;
    cout<<arr[idx]<<" ";
    print(arr,n,idx+1);
}
void vectorprint(vector<int>&v,int idx){
    if(idx==v.size())return;
    cout<<v[idx]<<" ";
    vectorprint(v,idx+1);
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    // print(arr,n,0);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    vectorprint(v,0);

}