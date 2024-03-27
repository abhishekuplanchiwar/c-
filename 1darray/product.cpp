#include<iostream>
using namespace std;
int main(){
//     [1,2,3,4]
// Output: [24,12,8,6]
int arr[5]={1,1,0,3,3};
int ans;
int product=1;
for(int i=0; i<5; i++){
    if(arr[i]>0){
     product=product*arr[i];
    }
    else{
       int ans=product;
    }
}
for(int i=0; i<5; i++)
{ if(arr[i]>0){ 
    int ans=product/arr[i];
    cout<<ans<<endl;
}
    else{
        cout<<product<<endl;
    }

}
}