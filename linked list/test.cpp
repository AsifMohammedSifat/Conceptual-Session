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

void insert_at_tail(Node *&head, int val){
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
    return;

}

void insertHead(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
    return;
}

void insertAny(Node* &head,int pos,int val){
    Node* newNode = new Node(val);
    if(pos==1){
        insertHead(head,val);
        return;
    }
    Node* temp = head;
    for(int i=1;i<pos-1;i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return;
}


void print_linked_list(Node *head){
    Node *tmp = head;
    cout << "Linked List: ";
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main(){
    Node *head = NULL;
    while(1){
        int val;
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,val);
        // insertHead(head,val);
        // insertAny(head,)
    }
    print_linked_list(head);
    cout<<endl;
    int pos,v;
    cin>>pos>>v;
    insertAny(head,pos,v);
    print_linked_list(head);
    return 0;
}