#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,2,3};
     int brr[3]={1,5,6};
    int element;
        for(int i=0; i<arr.size(); i++){
            element=arr[i];
           for(int j=0; j<brr.size(); j++){
            if(element==brr[j]){
                
                 cout<<element<<endl;
                 break;
            }
           }
               }

            
    
    }