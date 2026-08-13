#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void InsertAtEnd(Node* &head, int value){
    
    Node* final = new Node{value, nullptr};

    if(head == nullptr){
        head = final;
        return;
    }

    Node* temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    
    
    temp->next =final;
}

void traverse(Node*& head){
    Node* temp= head;
    while(temp != nullptr){
        cout<<temp->data<<endl;
        temp= temp->next;
    }
}

int main() {
    Node* first= new Node{10, nullptr};
    Node* second= new Node{20, nullptr};
    Node* third= new Node{30, nullptr};

    first->next = second;
    second->next = third;
    third->next = nullptr;

    Node* head = first;
    int value;
    cout<<"Insert at the end: ";
    cin>>value;
    cout<<endl;
    InsertAtEnd(head, value);
    traverse(head);

    return 0;
}