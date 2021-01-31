#include <iostream>
#include "node_class.cpp"

using namespace std;


node* reverseLL_withoutPair(node *head) {
    if(head==nullptr || head->next ==nullptr){
        return head;
    }
    node* ss = reverseLL_withoutPair(head->next);
    node* tail = head->next;

    tail->next = head;
    head->next = nullptr;

    return ss;

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

    node* head_rev = reverseLL_withoutPair(head);
    print(head_rev);
    cout<<endl;

    //------------ CIN =     1 2 3 4 5 6 7 -1
}