#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void remove_x(char *s){
    if(s[0] =='\0')return;
    if(s[0] != 'x' )return remove_x(s + 1);
    else{
        int i=1;
        for(;s[i]!='\0';i++)s[i-1]=s[i];
        s[i-1]=s[i];
        remove_x(s);
    }
}

int length(const char s[]){
    if(s[0]=='\0')return 0;
    int s_length = length(s + 1);
    return s_length + 1;
}

int main() {
    char s[100];
    cin>>s;
    cout<<s<<endl;
    cout<<length(s)<<endl;
    remove_x(s);
    cout<<s<<endl;
    cout<<length(s)<<endl;
}