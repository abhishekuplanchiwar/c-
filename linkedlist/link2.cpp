#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*next;
    node(int val){
        this->val = val;
         this->next = NULL;
    }


};
    int main(){
   
    
     node a(2);
      node b(3);
       node c(2);
        node d(4);
       a.next = &b;
        b.next = &c;
         c.next = &d;

    
    //  cout<<a.val;//2
    //  cout<<a.next;// b ka addres
    //  cout<<&b;//b ka address
    //   cout<<&b->val;// not valid
    //  cout<<(a.next)->val;// bki value
    cout<<((a.next)->next)->val;// c ki value

}