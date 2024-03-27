
//    #include<iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;
//     node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// class linkedlist {
//     node* head;
//     node* tail;
//     int size;
// public:
//     linkedlist() {
//         head = tail = NULL;
//         size = 0;
//     }
//     void insertatend(int val) {
//         node* temp = new node(val);
//         if (size == 0) {
//             head = tail = temp;
//         }
//         else {
//             tail->next = temp;
//             tail = temp;
//         }
//         size++;
//     }
//     void insertathead(int val) {
//         node* temp = new node(val);
//         if (size == 0) {
//             head = tail = temp;
//         }
//         else {
//             temp->next = head;
//             head=temp;
//         }
//         size++;
//     }

//     void insertatidx(int idx,int val) {
//         if(idx<0||idx>size){
//             cout<<"Invalid"<<endl;
//             return;
//         }
//         if (idx==0) {
//             inserathead(val);
//             return;
//         }
//     if (idx==size) {
//             inseratend(val);
//             return;
//         }
        
        
//         else {
//            node* t=new node(val);
//             node* temp=head;
//             for(int i=0;i<size;i++){
//                  temp=temp->next;//temp traversal age
            
//             }
//             t->next=temp->next;
//             temp->next=t;
//          size++;
//         }
        
//     }
//     void display() {
//         node* temp = head;
//         while (temp != NULL) {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     linkedlist ll;
//     ll.insertatend(10);
//       ll.display();
//     ll.insertatend(20);
//     ll.display();
//     ll.insertatend(30);
//     ll.display();
//     ll.insertathead(5);
//      ll.display();
//        ll.insertatidx(2,70);
//      ll.display();
//     return 0;
// }
#include<iostream>
using namespace std;

class node {
public:
    int val;
    node* next;
    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class linkedlist {
    node* head;
    node* tail;
    int size;
public:
    linkedlist() {
        head = tail = NULL;
        size = 0;
    }
    void insertatend(int val) {
        node* temp = new node(val);
        if (size == 0) {
            head = tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertathead(int val) {
        node* temp = new node(val);
        if (size == 0) {
            head = tail = temp;
        }
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertatidx(int idx, int val) {
        if (idx < 0 || idx > size) {
            cout << "Invalid index" << endl;
            return;
        }
        if (idx == 0) {
            insertathead(val);
            return;
        }
        if (idx == size) {
            insertatend(val);
            return;
        }

        node* t = new node(val);
        node* temp = head;
        for (int i = 0; i < idx - 1; i++) {
            temp = temp->next;
        }
        t->next = temp->next;
        temp->next = t;
        size++;
    }

    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    linkedlist ll;
    ll.insertatend(10);
    ll.display();
    ll.insertatend(20);
    ll.display();
    ll.insertatend(30);
    ll.display();
    ll.insertathead(5);
    ll.display();
    ll.insertatidx(2, 70);
    ll.display();
    return 0;
}
