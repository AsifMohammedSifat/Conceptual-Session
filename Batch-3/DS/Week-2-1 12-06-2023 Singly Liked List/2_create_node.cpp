/*
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
        Node* next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

int main(){

    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(50);

    a->next = b;
    b->next = c;
    c->next = NULL; //optional


    Node* temp = a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }            

    //Question:  when we should use temp->next!=NULL and when temp!=NULL?
              
    return 0;
}
