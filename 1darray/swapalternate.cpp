
/*
<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i=i+2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
         if(arr[i+1]!=arr[4]){
         cout<<arr[i]<<endl<<arr[i+1]<<endl;

    }
}
if(5%2!=0)
cout<<arr[4]<<endl;
    }
    
*/







//optimizing solution
#include<iostream>
using namespace std;
int print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
void swap(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,2,3,4,5};
    swap(even,6);
    print(even,6);
    swap(odd,5);
    print(odd,5);

}
















    
