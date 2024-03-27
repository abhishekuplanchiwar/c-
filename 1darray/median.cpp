#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2};
int brr[]={3,4};
vector<int>v;
for(int i=0;i<2;i++){
    v.push_back(arr[i]);
}
for(int i=0;i<2;i++){
    v.push_back(brr[i]);
}
sort(v.begin(),v.end());
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<endl;
// }
if(v.size()%2==1){
    int ans=v.size()/2;
    cout<<v[ans];
}
if(v.size()%2==0){
    int ans=v.size()/2;
    float abhi = static_cast<float>(v[ans]+v[ans-1])/2;
    cout<<abhi;
    
}



}