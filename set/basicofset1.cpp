#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.erase(2);
    for(auto ele:s){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
}