#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[9]={1,1};
int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=0;
        int area;
        
      for(int i=0;i<n;i++)  {
        int j=i+1;
          while(j<n){
            if(arr[i]==arr[j]){
              area=(j-i)*arr[j];
             maxi=max(area,maxi);   
            }
            else{
             area=(j-i)*min(arr[i],arr[j]);
             maxi=max(area,maxi); }
           
      
          }
          j++;
      }
 cout<<maxi<<endl;
}