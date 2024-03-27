#include<iostream>
using namespace std; 
int main(){
   
    int arr[100];
    int size;
    cout<<"size of array"<<endl;
    cin>>size;
     if(size==1){
        int sum=1;
        int su=0;
        cout<<sum<<endl<<su;
    }
    else{
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }
    
     arr[size-1]=arr[size-1]+1;
    for(int i=0; i<size;i++){
        cout<<arr[i];
    }
    }
}