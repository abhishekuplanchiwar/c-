#include<iostream>
using namespace std;
// void fun(){ // formal argument
//     cout<<"fun"<<endl;
//     fun();
// }
// int main(){
    
//     fun();//acrtual arguent
// }
void fun(int n){
    if(n==0) return;
    cout<<"good morning"<<endl;
    fun(n-1);
}
int main(){
    int n;
    cin>>n;
    
    fun(n);
}