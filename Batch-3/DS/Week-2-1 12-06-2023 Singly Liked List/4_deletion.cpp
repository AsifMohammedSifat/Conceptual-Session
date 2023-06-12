/*
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/

/***
 * Insert at Head
 * Print List
 * Insert at Tail
 * Count LikedList Size
 * Insert any index
 * 
*/
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

int getSize(Node* head){
    int count=0;

    while(head!=NULL){
        head = head->next;
        count++;
    }
    return count;
}

//insert at tail
void insertAtTail(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void deleteFromHead(Node* &head){
    Node* temp = head;
    Node* headNext = head->next;
    head = headNext;
    delete temp;
}

void deleteFromTail(Node* &head){
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    Node* temp1 = temp->next;
    temp->next = NULL;
    delete temp1;
}

//print singly linked list
void printList(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}



int main(){

    Node* head = NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    printList(head);

    deleteFromHead(head);
    printList(head);

    deleteFromTail(head);
    printList(head);


   



              
    return 0;
}
