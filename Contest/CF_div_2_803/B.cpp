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
        vector<ll> v[n+1];
        for(int i=1;i<=n;i++){
            int data;
            cin >> data;
            v[data].push_back(i);
        }
        for(int i=1;i<=n;i++){
            if(v[i].size()<=1) cout << v[i].size() << " ";
            else{
                ll ct=1;
                for(int j=0;j<v[i].size()-1;j++){
                    int dif=v[i][j+1]-v[i][j]-1;
                    if(dif%2==0) ct++;
                }
                cout << ct << " ";
            }
            
        }
        cout << endl;
    }
    return 0;
}