#include <stdio.h>
#include <cmath>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void print_all_subsequences(string i, string o){
    if(i.empty()){
        cout << o <<endl;
        return;
    }
    print_all_subsequences(i.substr(1),o);
    print_all_subsequences(i.substr(1),o+i[0]);
}

int main(){
    int n =0;
    //cin>>n;
    string i;
    cin>>i;
    string o;
    print_all_subsequences(i,o);
    return 0;
}
