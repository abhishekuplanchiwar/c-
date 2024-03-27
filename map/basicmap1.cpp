#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>m;
    // pair<string,int>p1;
    // p1.first ="raghv";
    // p1.second =12;
    //  pair<string,int>p2;
    // p2.first ="abhi";
    // p2.second =11;
    //  m.insert(p1);
    //  m.insert(p2);
    // another method
    m["abhi"]=17;
    m["nikhil"]=18;

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;
    m.erase("abhi");
    
    
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;
    cout<< m["abhi"];
    //it take the  initial value zero
    

}
    
