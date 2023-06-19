/*
||-----------------------||
||  All Praise to Allah  ||
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/

/**
            Topics: Doubly Linked List:
            1)Insert Operation(head,tail,any position)
            2)Delete Opetaiton(head,tail,any position)

*/

#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};



/**==========================|Size|==================================*/
//size
int getSize(Node* head){
    int count = 0;
    while(head!=NULL){
        count++;
        head = head->next;
    }
    return count;
}

/**==========================|Insert Operation|==================================*/
//insert at tail
void insertAtTail(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);

    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

}

//insert at head
void insertAtHead(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    Node* temp = head; 
    head = newNode;
    newNode->next = temp;
    temp->prev = newNode;
}


//insert at any position
void insertAtAny(Node* &head,Node* &tail,int pos,int val){
    if(pos>getSize(head)+1){
        cout<<"Invalid\n";
    }
    else if(pos==1){
        insertAtHead(head,tail,val);
        return;
    }
    else if(pos==getSize(head)+1){
        insertAtTail(head,tail,val);
    }
    else{
        Node* newNode = new Node(val);

        Node* temp = head;
        for(int i=1;i<=pos-2;i++){
            temp = temp->next;
        }
        newNode->prev = temp;
        newNode->next = temp->next;

        temp->next->prev = newNode;
        temp->next = newNode;
    }

}

//delete from head
void deleteFromHead(Node* &head){
    if(head==NULL){
        cout<<"List is already empty\n";
    }
    Node* temp = head;
    head = head->next;
    head->next->prev = NULL;
    delete temp;
}

//delete from tail
void deleteFromTail(Node* &tail){
    if(tail==NULL){
        cout<<"List already empty\n";
    }
    Node* deleteNode = tail;

    Node* temp = tail->prev;
    temp->next = NULL;
    delete deleteNode;

    tail = temp;
}

//delete form any
void deleteFromAny(Node* &head,Node* &tail,int pos){
    if(pos>getSize(head)){
        cout<<"Invalid\n";
    }
    else if(pos==1){
        deleteFromHead(head);
    }
    else if(pos==getSize(head)){
        deleteFromTail(tail);
    }
    else{
        Node* temp = head;
        for(int i=1;i<pos-1;i++){
            temp = temp->next;
        }

        Node* deleteNode = temp->next;

        temp->next = deleteNode->next;
        deleteNode->next->prev = temp;

        delete deleteNode;
    }
}


//PRINT LIST
void printList(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    
    /**==========================|Insert Operation|==================================*/

    int val;
    while(true){
        cin>>val;
        if(val==-1) break;

        insertAtTail(head,tail,val);
        //insertAtHead(head,tail,val);
    }
    printList(head);

    insertAtAny(head,tail,1,100);
    printList(head);

    insertAtAny(head,tail,getSize(head)+1,200);
    printList(head);

    insertAtAny(head,tail,3,50);
    printList(head);


    /**==========================|Delete Operation|==================================*/
    deleteFromHead(head);
    printList(head);

    deleteFromTail(tail);
    printList(head);

    deleteFromAny(head,tail,3);
    printList(head);
    return 0;
}
