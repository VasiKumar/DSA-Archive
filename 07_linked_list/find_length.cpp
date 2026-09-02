#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};


int length(Node* &head){
    Node* temp =head;
    int i=0;
    while(temp != nullptr){
        i++;
        temp=temp->next;
    }
    return i;
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
    fourth->next= fifth;

    Node* head = first;

    int len=length(head);

    cout<<"Length is :"<<len<<endl;
    return 0;
}