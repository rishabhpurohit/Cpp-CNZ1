#include <iostream>
#include <vector>
#include "stack_using_LL.cpp"
using namespace std;


int main(){
    StackUsingLL<char> s;
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);

    cout<<s.getsize()<<endl;
    cout<<s.top()<<endl;


    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;

    cout<<s.isEmpty()<<endl;
    return 0;
}