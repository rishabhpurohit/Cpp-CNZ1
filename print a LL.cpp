#include <cmath>
#include <bits/stdc++.h>
#include <iostream>

#include "node_class.cpp"

using namespace std;

void print(node * head){
    node *temp = head;
    while(temp!=NULL){
        cout<<(*temp).data<<" "; //temp ->data
        temp = (*temp).next; // temp -> next these also work ..........its the same
    }
}

int main(){
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

    print(head);
}




