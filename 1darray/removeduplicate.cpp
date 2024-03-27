#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4]={1,3,2,3};
   
    for(int i=0; i<4;i++){
      for(int j=i+1; j<4; j++){
        if(arr[i]==arr[j]){
            arr[i]=0;
        }
      }
          

}
 sort(arr,arr+4);

 for(int i=1; i<4; i++){
       cout<<arr[i]<<endl;
    }
}