#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* first= new Node{10, nullptr};
    Node* second= new Node{20, nullptr};
    Node* third= new Node{30, nullptr};

    first->next = second;
    second->next = third;
    third->next = nullptr;

    Node* temp = first;

    while(temp != nullptr){
        cout<<temp->data<<endl;
        temp = temp->next;

    }
    return 0;
}