#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int return_all_subsequences(string i, string o[]){
    if(i.empty()){
        o[0]=" ";
        return 1;
    }
    string smallstring = i.substr(1);
    int smalloutput = return_all_subsequences(smallstring,o);
    for(int t=0;t<smalloutput;t++){
        o[t+smalloutput]=i[0]+o[t];

    }
    return 2*smalloutput;
}

int main(){
    int n =0;
    //cin>>n;
    string i;
    cin>>i;
    string* o = new string[];
    int n1 = return_all_subsequences(i,o);
    for(int i=0;i<n1;i++){
        cout<<o[i]<<endl;
        //cout<<i+1<<endl;
    }
    return 0;
}
