#include<iostream>
using namespace std;
int main(){
    int arr[5]={7,9,1,2,3};
    int key=1;


int s=2;
int e=5-1;
int m=(s+e)/2;
while(s<e){
if(arr[m]==key){
     cout<<m<<endl;
     

}

else if(arr[m]<key){
s=m+1;
    
    }  
    else if(arr[m]>key){
e=m-1;
    
    }  
    m=(s+e)/2;
}
}
   