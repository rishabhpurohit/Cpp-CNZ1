#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=0,m=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int Xo =0;
    for(int i=1;i<n;++i){
        Xo = Xo ^ a[i][1];
    }
    if(Xo){
        cout<<"TAK"<<endl;
        for(int i=1;i<n;i++){
            cout<<1<<" ";
        }
        return 0;
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(a[i][j] != a[i][1]){
                cout << "TAK" << '\n';
                for(int k = 1; k <= n; ++k){
                    if (k != i) cout << 1 << ' ';
                    else cout << j << ' ';
                }
                return 0;
            }
        }
    }
    cout << "NIE" << '\n';
    return 0;
}