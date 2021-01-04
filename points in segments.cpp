#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n=0,m=0;
    cin>>n>>m;
    unordered_set<int> s;
    for(int i=1;i<=m;i++){
        s.insert(i);
    }
    while(n--){
        int l=0,r=0;
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            s.erase(i);
        }
    }

    if(s.empty()){cout<<0<<endl;}
    else{
        cout<<s.size()<<endl;
        for(auto i:s)cout<<i<<" ";
    }

}