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
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

//size of linked list
int getSize(Node* head){
    int count = 0;
    while(head!=NULL){
        count++;
        head = head->next;
    }
    return count;
}



/***=======================|Insert Operation|===========================****/

//insert at head

void insertAtHead(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);

    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    Node* temp = head;

    newNode->next = head;
    temp->prev = newNode;
    head = newNode;
}

//insert at tail
void insertAtTail(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

}

//insert at any position

void insertAtAny(Node* &head,Node* &tail,int pos,int val){
    if(pos==1){
        insertAtHead(head,tail,val);
    }
    else if(pos==getSize(head)+1){
        insertAtTail(head,tail,val);
    }
    else{
        Node* newNode = new Node(val);

        Node* temp = head;
        for(int i=1;i<pos-1;i++){
            temp = temp->next;
        }

        newNode->prev = temp;
        newNode->next = temp->next;

        temp->next = newNode;
        temp->next->prev = newNode;

    }
}


/***=======================|Delete Operation|===========================****/
//delete from head
void deleteFromHead(Node* &head){
    if(head==NULL){
        cout<<"List already empty\n";
    }
    Node* deleteNode = head;
    deleteNode->next->prev = NULL;
    head = head->next;

    delete deleteNode;
}

//delte from tail
void deleteFromTail(Node* &tail){
    if(tail==NULL){
        cout<<"List already Empty\n";
        return;
    }

    Node* deleteNode = tail;

    tail->prev->next = NULL;
    tail = tail->prev;

    delete deleteNode;

}



/***=======================|Print|===========================****/

//print the list
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

    int val;

    while(true){
        cin>>val;
        if(val==-1) break;

        insertAtTail(head,tail,val);
        //insertAtHead(head,tail,val);
    }
    printList(head);

    // insertAtAny(head,tail,1,5000);
    // printList(head);

    // insertAtAny(head,tail,getSize(head)+1,5000);
    // printList(head);


    // insertAtAny(head,tail,2,15);
    // printList(head);

    // deleteFromHead(head);
    // printList(head);

    deleteFromTail(tail);
    printList(head);
            
              
    return 0;
}
