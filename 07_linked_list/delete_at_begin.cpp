#include<iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteAtFirst(Node* & head){
    Node* temp = head;
    head=temp->next;
    delete temp;
}

void traverse(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<< endl;
        temp = temp->next;
    }
}

int main(){
    Node* first= new Node{10, nullptr};
    Node* second= new Node{20, nullptr};
    Node* third= new Node{30, nullptr};
    Node* fourth= new Node{40, nullptr};
    Node* fifth= new Node{50, nullptr};

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;
    
    Node* head = first;
    deleteAtFirst(head);
    traverse(head);
}