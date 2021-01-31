#include <iostream>
#include "node_class.cpp"

using namespace std;

class Pair{
public:
    node* head;
    node*tail;
};





Pair reverse_a_ll2(node *head) {
    if(head==nullptr || head->next ==nullptr){
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }

    Pair ss = reverse_a_ll2(head->next);

    ss.tail->next = head;
    head->next = nullptr;

    Pair ans;
    ans.head = ss.head;
    ans.tail = head;
    return ans;
}

node* reverse_better(node*head){
    return (reverse_a_ll2(head).head);
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
    cout<<endl;
}


int main(){

    node* head = take_Input();
    print(head);

    node* head_rev = reverse_better(head);
    print(head_rev);
    cout<<endl;

    //------------ CIN =     1 2 3 4 5 6 7 -1
}