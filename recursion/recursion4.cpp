// #include<iostream>
// using namespace std;
// void num(int i,int n){ // formal argument
//     if(i>n) return;
//     cout<<i<<endl;
//     num(i+1,n);
    
    
// }
// int main(){
//     int m;
//     cin>>m;
//    num(1,m);
// }



#include<iostream>
using namespace std;
void num(int n){ 
    
    if(n==0) return;
    
    num(n-1);
    cout<<n<<endl;
    
    
}
int main(){
    
   num(3);
}