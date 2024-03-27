#include<iostream>
using namespace std;
#include<vector>
int main(){
    int n;
    cin>>n;
    int arr[n];
    int m;

    int count=0;
    for(int i=0;i<n;i++){
        if(i<n-1 && arr[i]==arr[i+1]) continue;
        else 
        arr[count]=arr[i];
    count++;
    }
     m=n-count;
     for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
        }
        cout<<" "<<count;


}
