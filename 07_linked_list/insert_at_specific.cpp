#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

void InsertAtSpecific(Node* &head,int position, int value){
    Node* temp = head;
    Node* newNode = new Node{value, nullptr};

    if(position < 0){
        cout<<"Invalid position!!!"<<endl;
        delete newNode;
        return;
    }
    if(head == nullptr || position == 0){
        newNode->next=head;
        head=newNode;
        return;
    }

    for(int i = 0 ; i<position-1; i++){

        
        if(temp == nullptr){
            cout<<"Enter valid position !"<<endl;
            delete newNode;
            return;
        }

        temp=temp->next;
    }
    
    if(temp ==nullptr){
        cout<<"Enter valid position !!!"<<endl;
        delete newNode;
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;

}

void traverse(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
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
    int value,  position;

    cout<<"Insert at position: ";
    cin>>position;
    cout<<endl;

    cout<<"Enter the value: ";
    cin>>value;
    cout<<endl;

    InsertAtSpecific(head, position, value);

    traverse(head);

}