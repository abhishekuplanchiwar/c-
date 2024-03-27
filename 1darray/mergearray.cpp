#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    int arr[3]={1,2,3};
    int brr[3]={4,5,6};
    for(int i=0; i<3; i++){
        v1.push_back(arr[i]);
    }
    for(int i=0; i<3; i++){
        v1.push_back(brr[i]);
    }
    for(int i=0; i<6; i++){
        cout<<v1[i]<<endl;
    }
}