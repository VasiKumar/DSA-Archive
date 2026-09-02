#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int search(Node* &head, int val){
    int i=0;
    Node* temp = head;
    while(temp!=nullptr){ 
        if(temp->data == val){
            return i;
        }
        else{
            temp = temp->next;
            i++;
        }
    }
    return 10000;
}



int main() {
    int val;
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
    cout<<"Search: ";
    cin>>val;
    int z= search(head, val);
    if(z==10000){
        cout<<"value not found";
    }
    else{
        cout<<"The index of  the value is: "<<z<<endl;
    }
}