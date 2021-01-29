#include <iostream>
#include <sys/time.h>
#include "node_class.cpp"
#include <cmath>

using namespace std;



// GET TIME IN ms



long getTimeInMicroSeconds(){
    struct timeval start{};
    gettimeofday(&start,nullptr);
    return start.tv_sec*1000000 + start.tv_usec;
}



//GET SIZE OF LL RECURSIVELY + ITERATIVELY



int size_LL(struct node* head){
    if(head==nullptr)return 0;
    else{
        return 1 + size_LL(head -> next);
    }
    /*
    node* temp = head;
    int count =0;
    if(temp == nullptr)return 0;
    while(temp->next != nullptr){
        count++;
        temp = temp -> next;
    }
    return count+1;
     */
}



//DELETE FROM A LL RECURSIVELY



node* delete_recursively(node*head, int i){
    if(head==nullptr)return head;
    if(i==1){
        node* del = head->next;
        node* ford = del->next;
        head-> next = ford;
        delete del;
        return head;
    }
    else{
        node*x = delete_recursively(head->next,i-1);
        head ->next = x;
    }
    return nullptr;
}



//DELETE FROM LL ITERATIVELY



node* delete_element(node*head , int x){
    if(x==0){
        node*temp1 =head;
        temp1 = temp1 -> next;
        return temp1;
    }
    else{
        node*temp =head;
        int count =0;
        while(count<x-2 && temp!=nullptr){
            count++;
            temp = temp->next;
        }
        if(temp==nullptr)return head;
        node* del = temp->next;
        node* b = del->next;
        temp -> next = b;
        delete del;
        return head;
    }
}



//INSERT INTO A LL



node* InsertElement(node * head, int i, int data){

    if(head == nullptr && i==0) {
        node* node1 = new node(data);
        head = node1;
        return head;
    }
    if(i==0){
        node*node2 = new node(data);
        node2 ->next = head;
        head = node2;
        return head;
    }
    node* newNode1 = new node(data);
    int count =0;
    node* temp = head;
    while(count < i-1){
        temp = temp -> next;
        count++;
    }
    newNode1 -> next = temp ->next;
    temp->next = newNode1;
    return head;
}



//INSERT INTO A LL RECURSIVELY



node* insert_recursively(node* head, int i, int data){
    if(head ==nullptr) return head;
    if(i==0){
        node* newNode = new node(data);
        newNode -> next = head;
        head = newNode;
        return head;
    }
    node* x = insert_recursively(head -> next,i-1,data);
    head -> next = x;
}



// TAKING INPUT IN A LL



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



//GET MID WITHOUT SIZE



int get_mid_without_size(node*head){
    if(head ==nullptr)return -1;
    node*slow = head;
    node*fast = slow->next;
    while (fast!=nullptr){
        if(fast->next == nullptr) break;
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}



//GET MID WITH SIZE



int get_mid(node*head,int size){
    int count=0;
    int mid = floor((size-1)/2);
    node*temp = head;
    while(count!=mid){
        temp = temp->next;
        count++;
    }
    return temp->data;
}



//PRINT A LL



void print(node * head){
    node *temp = head;
    while(temp!=nullptr){
        cout<<(*temp).data<<" "; //temp ->data
        temp = (*temp).next; // temp -> next these also work ..........its the same
    }
    cout<<endl;
    /*
    temp = head;

    while(temp!=NULL){
        cout<<(*temp).data<<" "; //temp ->data
        temp = (*temp).next; // temp -> next these also work ..........its the same
    }
    cout<<endl;
     */
}



int main(){
    /* TO MANUALLY ADD NODES TO LL
    node n1(1);
    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);

    node *head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = NULL;
    */


    long start_time = getTimeInMicroSeconds();
    node* head = take_Input();
    long end_time = getTimeInMicroSeconds();
    print(head);
    cout<<"TIME = "<< end_time - start_time << endl;


    InsertElement(head,1,5000);
    print(head);


    delete_element(head,1);
    print(head);


    int size = size_LL(head);
    cout<<"SIZE of LinkedList = "<<size<<endl;


    int mid = get_mid(head,size);
    cout<<"MID WITH HEAD = "<<mid<<endl;
    print(head);


    int mid2 = get_mid_without_size(head);
    cout<<"MID WITHOUT HEAD = "<<mid2<<endl;


    head = insert_recursively(head,2,7000);
    print(head);


    head = delete_recursively(head,2);
    print(head);


    //------------ CIN =     1 2 3 4 5 6 7 -1
}




