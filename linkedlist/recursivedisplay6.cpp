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
    
    void display(node* head){
         if(head==NULL){
            return;
         }
         cout<<head->val<<" ";
         display(head->next);
    // cout<<head->val<<" ";
        
        
        }
        
        int size(node* head){
         node* temp=head;
         int n=0;
        while(temp!=NULL){
            n++;
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        return n;
        }
    
        

        int main(){
    
        node*a=new node(10);
         node*b=new node(20);
          node*c=new node(30);
           node*d=new node(40);
       a->next =b;
       b->next =c;
       c->next =d;


      display(a);
    //   cout<<size(a);
        

    }