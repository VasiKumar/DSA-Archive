#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

};

void insertAtBeginning(Node* &head, int value){
    Node* newNode = new Node{value, head};
    head= newNode;

}

void traverse(Node*& head){
    Node* temp= head;
    while(temp != nullptr){
        cout<<temp->data<<endl;
        temp= temp->next;
    }
}


int main(){
    Node* first= new Node{10, nullptr};
    Node* second= new Node{20, nullptr};
    Node* third= new Node{30, nullptr};

    first->next = second;
    second->next = third;
    third->next = nullptr;

    Node* head = first;
    int value;
    cin>>value;
    insertAtBeginning(head, value);

    traverse(head);
    return 0;
}