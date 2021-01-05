#include <iostream>
#include <string>
using namespace std;


int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int w=0;
    while(1){
        int i= s1.size()-1-w;
        int j= s2.size()-1-w;
        if(i>=0 &&j>=0 && s1[i]==s2[j])
            w++;
        else break;
    }
    cout << s1.size()+s2.size()-2*w<<endl;
}