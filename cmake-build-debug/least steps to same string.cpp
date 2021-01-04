#include<bits/stdc++.h>
#include<string>
using namespace std;

int minSteps(string s,string t)
{
    int l1=s.length();
    int l2=t.length();

    if(l1 == 0 || l2 == 0)
        return max(l1,l2);
    if(s[0] == t[0])
        return minSteps(s.substr(1),t.substr(1));

    int a=minSteps(s.substr(1),t);
    int b=minSteps(s,t.substr(1));
    int c=minSteps(s.substr(1),t.substr(1));

    return min(c+2,min(a+1,b+1));
}

int main()
{
    string s,t;

    cin>>s>>t;

    cout<<minSteps(s,t);

    return 0;
}