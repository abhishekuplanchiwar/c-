#include<bits/stdc++.h>
using namespace std;
int main(){
string str="pwwkey";
int ans,count=0,maxi=0;
unordered_set<int>s;
for(int i=0;i<str.length();i++){
    for(int j=0;j<str.length();j++){
        
        if(s.find(str[j])!=s.end()){
            count=1;
            s.clear();
            break;
        }
        else{
            s.insert(str[j]);
            count++;
            ans=count;
        }
        maxi=max(ans,maxi);

    }
}
cout<<maxi<<endl;


}