#include<iostream>

#include<bits/stdc++.h>

#include<string>
#include<vector>
using namespace std;
int main(){
   
    vector<string>v;
    v.push_back("flower");
    v.push_back("flow");
    sort(v.begin(), v.end());
    // for(int i=0; i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }
    string first=v[0];
    string second=v[v.size()-1];
    string s="";
    for(int i=0;i<v.size();i++){
        if(first[i]==second[i]){
s+=first[i];
cout<<s<<endl;
        }
        else
        cout<<s;
    }

    }