#include<iostream>

#include<bits/stdc++.h>

#include<string>
using namespace std;
int main(){
    string str="abb";
    int arr[26];
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        int asci=(int)c;
        arr[asci-97]++;

    }
    int max=0;
    for(int i=0; i<26; i++){
  if(arr[i]>max){
    max=arr[i];
        }
    }

     for(int i=0; i<26; i++){
 
 if(arr[i]==max){
    int asci=i+97;
    char ch=(char)asci;
    cout<<ch<<" "<<asci<<endl;
        }
     }
}
            