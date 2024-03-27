#include<iostream>

#include<bits/stdc++.h>

#include<string>
using namespace std;
int main(){
    string str="abhishek";
    string ftr="kaebhhis";
    sort(str.begin(), str.end());
    sort(ftr.begin(), ftr.end());
    if(str==ftr){
        cout<<"string is anagram"<<endl;
    }
    else{
     cout<<"string is not anagram"<<endl;
}
}