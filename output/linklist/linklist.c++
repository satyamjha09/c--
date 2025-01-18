#include<iostream>
using namespace std;


class Node {
    public:
      int data;
      Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

    public:

    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else {
            newNode -> next = head;
            head = newNode;
        }
    }

    void printLL() {

        Node* temp = head;

        while(temp != NULL){
            cout << temp -> data <<" ";
            temp = temp -> next;
        }
    }

    void pop_front() {
        if(head == NULL){
            cout << "LL is empty\n";
        }

        Node* temp = head;
        head = head-> next;
        temp-> next = NULL;

        delete temp;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            tail -> next = newNode;
            tail = newNode;
        }


    }

    void insert(int val , int pos) {
        if(pos < 0){
            cout << "insert pos\n";
            return;
        }

        if(pos == 0){
            push_front(val);
            return;
        }
        Node* temp = head;

        for(int i = 0; i < pos - 1; i++){
            temp = temp -> next;
        }

        Node* newNode = new Node(val);
        newNode-> next = temp -> next;
        temp-> next = newNode;
    }

    int Search(int val) {

       Node* temp = head;
       int pos = 0;

       while(temp != NULL){
            if(temp -> data == val){
                return pos;
            }

            temp = temp -> next;
            pos++;
       }
    }

    void pop_back() {
        if(head == NULL){
            cout << "LL is empty\n";
            return;
        }

        Node* temp = head;
        while(temp -> next != tail){
            if(temp == NULL){
                cout <<"invalid pos\n";
            }
            temp = temp -> next;
        }

        temp -> next = NULL;
        delete tail;
        tail = temp;
    }
};




int main() {

    List ll;

    ll.push_front(1);
    ll.push_front(4);
    ll.push_front(3);

    ll.printLL();

    ll.push_back(34);
    ll.push_back(44);

    ll.pop_front();

    ll.insert(245 , 3);

    ll.printLL();





    return 0;
}