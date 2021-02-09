#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    cout<<s.top()<<endl;
    s.pop();
    s.push(3);
    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;

    return 0;
}