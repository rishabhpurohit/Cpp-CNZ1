#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int MIN_SUM(int n, vector<pair<int,int>> vp){

}
int main(){
    int n=0;
    cin>>n;
    vector<int> x;
    vector<int> v;
    while(n--){
        int a=0;
        cin>>a;
        x.push_back(a);
    }
    while(n--){
        int a=0;
        cin>>a;
        v.push_back(a);
    }
    vector< pair<int,int> > vp;
    for(int i=0;i<n;i++){
        vp.push_back( {x[i],v[i]} );
    }
    cout<< MIN_SUM(n,vp)<<endl;

    return 0;
}