#include<iostream>
using namespace std;
int num(int n){ // formal argument
    if(n==0)return 1;
    cout<<n<<endl;
    return num(n-1);
}
int main(){
    
  cout<<num(10);
}