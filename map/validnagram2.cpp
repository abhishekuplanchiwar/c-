#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="rat";
    string t="car";
    unordered_map<char,int>m1;
     unordered_map<char,int>m2;
     for(int i=0;i<s.size();i++){
        m1[s[i]]++;
     }
      for(int i=0;i<t.size();i++){
        m2[s[i]]++;
     }
     for(auto x:m1){
        char ch1=x.first; 
        int fre1=x.second;
        if(m2.find(ch1)!=m2.end()){
                int fre2=m2[ch1];
                if(fre1!=fre2){
                    cout<<"false";
                    break;
                }
                
        }
     }
     cout<<"true"<<endl;
}