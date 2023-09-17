#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        vector<vector<ll>> v(n);
        for(int i=0;i<n;i++){
            vector<ll> tmp;
            int col=3;
            for(int j=0;j<col;j++){
                int element;cin >> element;
                tmp.push_back(element);
            }
            v[i]=(tmp);
        }
        for(int a=0;a<n;a++){
            for(int d=0;d<3;d++){
                cout << v[a][d] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}