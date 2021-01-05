FOR VECTOR

void merge(int arr[], int l, int m, int r){
    int i=l;
    int j=m+1;
    int index = 0;
    int* temp = new int[r-l+1];
    while(i<=m && j<=r){
        if(arr[i]<=arr[j]){
            temp[index++]=arr[i++];
        }
        else{
            temp[index++] = arr[j++];
        }
    }
    while (i <= m) temp[index++] = arr[i++];
    while (j <= r) temp[index++] = arr[j++];

    for (int x = 0, y = l; x < r-l+1; x++, y++) {
        arr[y] = temp[x];
    }
    delete [] temp;
}

void merge_sort(int arr[], int l, int r){
    if(l>=r)return;
    int m = l+(r-l)/2;

    merge_sort(arr, l, m);
    merge_sort(arr, m+1, r);
    merge(arr, l, m, r);
}
vector<int> sortArray(vector<int>& nums) {
    int a[nums.size()];
    for(int i=0;i<nums.size();i++){
        a[i]=nums[i];
    }
    merge_sort(a,0,nums.size()-1);
    nums.clear();
    for(int i:a){
        nums.push_back(i);
    }
    return nums;
}


---------------------------------------------------
FOR ARRAY



#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){
    int i=l;
    int j=m+1;
    int index = 0;
    int* temp = new int[r-l+1];
    while(i<=m && j<=r){
        if(arr[i]<=arr[j]){
            temp[index++]=arr[i++];
        }
        else{
            temp[index++] = arr[j++];
        }
    }
    while (i <= m) temp[index++] = arr[i++];
    while (j <= r) temp[index++] = arr[j++];

    for (int x = 0, y = l; x < r-l+1; x++, y++) {
        arr[y] = temp[x];
    }
}

void mergeSort(int arr[], int l, int r){
    if(l>=r)return;
    int m = l+(r-l)/2;

    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);
}

int main()
{
    int n=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergeSort(a, 0, n-1);
    for(auto i:a){
        cout<<i<<" ";
    }
    return 0;
}
