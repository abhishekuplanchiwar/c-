#include<iostream>
using namespace std;
int main(){

char arr[1]={"aba"};
cout<<arr.size()<<endl;
}


int n=arr.size();
        
        
        for(int i=0;i<n;i++){
             string v=arr[i];
         int start=0;
         int end=v.size()-1;
            while(start<end){
            
            if(v[start]==v[end]){
                start++;
                end--;
            }
            }
        }