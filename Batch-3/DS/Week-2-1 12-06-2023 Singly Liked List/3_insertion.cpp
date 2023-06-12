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

//insert at head
void insertAtHead(Node* &head,int val){
    Node* newNode  = new Node(val);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    head = newNode;
    newNode->next = temp;

}

//insert at any index
void insertAtAnyIndex(Node* &head,int index,int val){
    Node* newNode = new Node(val);

    //insert at head
    if(index==1){
        insertAtHead(head,val);
        return;
    }
    //insert at tail
    else if(index == getSize(head)){
        insertAtTail(head,val);
        return;
    }

    int count = 1;
    Node* temp = head;
    while(index-1!=count){
        temp = temp->next;
        count++;
    }

    Node* temp1 = temp->next;
    temp->next = newNode;
    newNode->next = temp1; 

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
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    printList(head);
    cout<<endl;

  
    head = NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    printList(head);
    cout<<endl;

   

    cout<<getSize(head)<<endl;

    insertAtAnyIndex(head,1,40);
    printList(head);

    insertAtAnyIndex(head,4,0);
    printList(head);

    insertAtAnyIndex(head,2,5000);
    printList(head);


              
    return 0;
}
