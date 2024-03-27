#include<iostream>
using namespace std;
int main(){
    int arr[6]={7,1,5,3,6,4};
    int min=1000;
    int index;
    for(int i=0;i<6;i++){
        if(arr[i]<min){
            min=arr[i];
            index=i;
        }
    }
     
    int max=0;
    for(int j=index+1;j<6;j++){
        if(arr[j]>max){
            max=arr[j];
        }
    }
    int diff=max-min;
    cout<<diff<<endl;
}