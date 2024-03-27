#include<iostream>
using namespace std;
int main(){
    int arr[6]={7,1,5,3,6,4};
    int min=1000;
    for(int i=0;i<6;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
     cout<<min<<endl;
}