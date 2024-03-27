// #include<iostream>
// using namespace std;
// void num(int sum,int n){ 
    
//     if(n==0){
//         cout<<sum<<endl;
//         return;
//     }
   
//     num(sum+n,n-1);
    
    
// }
// int main(){
    
//    num(0,4);
// }

#include<iostream>
using namespace std;
int sum(int n){ // formal argument
    if(n==0||n==1) return 1;
    return n+sum(n-1);
}
int main(){
    
   cout<<sum(5);
}