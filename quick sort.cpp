#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int part(int a[],int s, int e){
    int count =0;
    int x = a[e];

    int i = s-1;
    for(int j=s;j<=e-1;j++){
        if(a[j]<x){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
}
void quickSort(int a[], int s, int e){
    if(s>=e)return;
    int c = part(a,s,e);
    quickSort(a,s,c-1);
    quickSort(a,c+1,e);
}
int main(){
    int n=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quickSort(a, 0, n-1);
    for(auto i:a){
        cout<<i<<" ";
    }
    return 0;
}
