#include <iostream>
#include <string>
using namespace std;


void remove_starting(string & s){
    s.erase(s.begin());
}
int get_more_count(string & s1,string & s2,int & count){
    while(!s2.empty()){
        if(s1==s2)return count;
        else if(s1.size()>s2.size()){
            remove_starting(s1);
            count++;
        }
        else{
            remove_starting(s1);
            remove_starting(s2);
            count+=2;
        }
    }
    if(s2.empty())return count;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int count=0;
    if(s1.size()<s2.size()){
        string temp =s1;
        s1 = s2;
        s2 = temp;
    }
    if(s2.empty())cout<<s1.size()<<endl;
    cout<< get_more_count(s1,s2,count)<<endl;
}