#include <iostream>
#include "node_class.cpp"

using namespace std;


node* reverseLL_Iter(node *head) {

    node* cr = head;
    node* nx = head->next;
    node* pr = nullptr;

    while(cr!=nullptr){
        cr->next = pr;
        pr = pr->next;
        cr = nx;
        nx= nx->next;
    }
    return pr;


}

node* take_Input(){
    int data =0;
    cin>>data;
    node* head = nullptr;
    node* tail = nullptr;
    while (data != -1){
        node *newNode = new node(data);
        if(head ==nullptr){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin>>data;
    }
    return head;
}



void print(node * head){
    node *temp = head;
    while(temp!=nullptr){
        cout<<(*temp).data<<" "; //temp ->data
        temp = (*temp).next; // temp -> next these also work ..........its the same
    }
    cout<<"HO HO HO! LIST PRINTED! "<<endl;
}


int main(){

    node* head = take_Input();
    print(head);

    node* head_rev = reverseLL_Iter(head);
    print(head_rev);
    cout<<endl;

    //------------ CIN =     1 2 3 4 5 6 7 -1
}