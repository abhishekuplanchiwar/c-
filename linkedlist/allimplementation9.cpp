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

    int get(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Invalid index" << endl;
            return -1;
        }
        node* temp = head;
        for (int i = 0; i < idx; i++) {
            temp = temp->next;
        }
        return temp->val;
    }

    void removeatidx(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Invalid index" << endl;
            return;
        }
        if (idx == 0) {
            node* temp = head;
            head = head->next;
            delete temp;
        }
        else {
            node* temp = head;
            for (int i = 0; i < idx - 1; i++) {
                temp = temp->next;
            }
            node* t = temp->next;
            temp->next = t->next;
            delete t;
            if (idx == size - 1) {
                tail = temp;
            }
        }
        size--;
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
    ll.insertatend(20);
    ll.insertatend(30);
    ll.insertatend(40);

    cout << "Original List: ";
    ll.display();

    cout << "Element at index 2: " << ll.get(2) << endl;

    ll.removeatidx(1);
    cout << "List after removing element at index 1: ";
    ll.display();

    return 0;
}
