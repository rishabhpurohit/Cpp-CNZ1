#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    string str;
    cin>>str;

    stack<int> s;
    for(char i:str){
        if(i == '{') s.push('}');
        else if(i == '[') s.push(']');
        else if(i == '(') s.push(')');
        else if(s.top()!=i && !s.empty()) break;
        else s.pop();
    }

    cout<< s.empty()<<endl;
    return 0;
}