#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    for(int i=1; i<7;i++){
        arr[i]=arr[i-1]+arr[i];
    }
cout<<arr[0]<<endl;
     for(int i=1; i<7;i++){
        cout << arr[i] <<endl;
    }
}