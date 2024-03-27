#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,0,1,0,0,1};

    int i,j;
    int left=0;
    int right=6-1;
    while(left<right){
        if(arr[left]==1&&arr[right]==0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else if(arr[left]==0){
            left++;
        }
          else if(arr[right]==1){
            right--;
        }


    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" "<<endl;
    }
}