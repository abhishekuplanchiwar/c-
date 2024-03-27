#include<iostream>
using namespace std;
int main(){
// int nums[4]={2,8,4,6};
// int max=0;
// int ans;
//     for(int i=0;i<4;i++){
//         if(nums[i]>max){
//             max=nums[i];
//             ans=i;

//         }
        
        
//     }
    
//     cout<<ans<<endl;
int arr[7]={0,10,5,2};
int a;
int s=0;
int e=4-1;
int m=(s+e)/2;
while(s<e){
if((arr[m]>arr[m+1])&&(arr[m]>arr[m-1])){
     cout<<arr[m]<<endl;
     break;

}
else if(arr[m]>arr[m-1]){
s=m+1;
    
    }  
    else if(arr[m]<arr[m-1]){
e=m-1;
    
    }  
    m=(s+e)/2;
   
}
}
    