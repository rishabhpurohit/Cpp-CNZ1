#include <bits/stdc++.h>
#include <iostream>
#include "QueueUsingArray.h"
using namespace std;

int main(){
    QueueUsingArray<int> q(1);
    //q.enqueue(0);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);


    cout<<q.front()<<endl;
    cout<<"removed - "<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<<"removed - "<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<<"removed - "<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<<"removed - "<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<<"removed - "<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<< (!q.isEmpty() ? "Not_EMPTY":"EMPTY") <<endl;
    cout<<q.getSize()<<endl;

    return 0;
}