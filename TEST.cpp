#include <iostream>
#include <vector>

using namespace std;


int MIN_SUM(int n, vector<int> x, vector<int> v){

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
    cout<< MIN_SUM(n,x,v)<<endl;

    return 0;
}