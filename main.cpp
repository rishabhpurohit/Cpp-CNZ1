#include <stdio.h>
#include <cmath>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        int a[n];
        int count=0,i=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        while(a[i]==1 && i<n-1) {
            count++;
            i++;
        }
        if(count%2==0)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
}




