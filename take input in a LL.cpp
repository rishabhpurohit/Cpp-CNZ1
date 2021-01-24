#include <iostream>
#include <cmath>
#include "node_class.cpp"

using namespace std;
//O n^2
node* take_Input(){
    int data =0;
    cin>>data;
    node * head = NULL;
    while (data != -1){
        node *newNode = new node(data);
        if(head ==NULL){
            head = newNode;
        }
        else{
            node *temp = head;
            while(temp->next != NULL){
                temp = temp ->next;
            }
            temp->next = newNode;
        }
        cin>>data;
    }
    return head;
}
//O n
node* take_Input_fast(){
    int data =0;
    cin>>data;
    node* head = NULL;
    node* tail = NULL;
    while (data != -1){
        node *newNode = new node(data);
        if(head ==NULL){
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
    while(temp!=NULL){
        cout<<(*temp).data<<" "; //temp ->data
        temp = (*temp).next; // temp -> next these also work ..........its the same
    }
    cout<<endl;
    temp = head;
    while(temp!=NULL){
        cout<<(*temp).data<<" "; //temp ->data
        temp = (*temp).next; // temp -> next these also work ..........its the same
    }
}

int main(){
    /*
    node n1(1);
    node *head = &n1;
    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = NULL;
    */
    node* head = take_Input();
    print(head);

}




