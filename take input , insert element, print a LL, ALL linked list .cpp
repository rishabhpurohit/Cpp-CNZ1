#include <iostream>
#include <cmath>
#include <sys/time.h>
#include "node_class.cpp"

using namespace std;
long getTimeInMicroSeconds(){
    struct timeval start;
    gettimeofday(&start,NULL);
    return start.tv_sec*1000000 + start.tv_usec;
}

void InsertElement(node * head, int i, int data){
    node* newNode1 = new node(data);
    int count =0;
    node* temp = head;
    while(count < i-1){
        temp = temp -> next;
        count++;
    }
    newNode1 -> next = temp ->next;
    temp->next = newNode1;
}

node* take_Input(){
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
    cout<<endl;
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
    long starttime = getTimeInMicroSeconds();
    node* head = take_Input();
    long endtime = getTimeInMicroSeconds();
    print(head);
    InsertElement(head,2,5000);
    print(head);
    //cout<<"TIME = "<< endtime - starttime << endl;

}




