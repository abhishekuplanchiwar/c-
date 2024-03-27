#include<iostream>
using namespace std;
int main(){


int arr[6]={4,7,2,3,4,5};
int a;
int s=0;
int e=6-1;
int m=(s+e)/2;
while(s<e){
if((arr[m]<arr[m+1])&&(arr[m]<arr[m-1])){
     cout<<arr[m]<<endl;
     break;

}
else if(arr[m]<arr[m+1]){
s=m-1;
    
    }  
    else if(arr[m]>arr[m-1]){
e=m-1;
    
    }  
    m=(s+e)/2;
   
}
}

    