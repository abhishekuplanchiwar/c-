#include<iostream>

#include<bits/stdc++.h>

#include<string>
using namespace std;
int main(){
    string str="abbcdeffghh";
   
    int count=0;

    for(int i=1;i<str.length();i++){
        if(str[i]!=str[i+1]){
            count++;
        }
      
        }

    
    cout<<count<<endl;
}