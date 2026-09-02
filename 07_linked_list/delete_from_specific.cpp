#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void deleteAtSpecific(Node* &head, int pos){

    if(head == nullptr || pos<1){
        cout<<"Nothing to delete"<<endl;
        return;
    }

    if(pos == 1){
        Node* toDelete = head;
        head = toDelete->next;
        delete toDelete;
        return;
    }


    Node* temp = head;
    for(int i = 1; i<pos-1 && temp!= nullptr ; i++){
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr){
        cout<<"Enter valid number"<<endl;
    }
    
    Node* toDelete = temp->next;
    temp->next= temp->next->next;
    delete toDelete;
    
}

void traverse(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<< endl;
        temp = temp->next;
    }
}

int main() {
    int pos;
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
    cout<<"Enter the position to delete: (1 indexing ! )";
    cin>>pos;
    deleteAtSpecific(head, pos);
    traverse(head);
}