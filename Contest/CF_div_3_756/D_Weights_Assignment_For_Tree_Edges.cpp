#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

void solve(){
    ll n;cin >> n;
    vector<ll> parent(n+1);
    vector<ll> permuta(n+1);
    ll root;
    for(ll i=1;i<=n;i++){
        cin >> parent[i];
        if(parent[i]==i){
            root=i;
        }
    }
    for(int i=1;i<=n;i++){
        cin >> permuta[i];
    }
    if(root!=permuta[1]){
        cout << -1 << endl;
        return;
    }
    vector<ll> distant(n+1,-1);
    vector<ll> edge_w(n+1);
    distant[root]=0;
    for(ll i=2;i<=n;i++){
        ll node= permuta[i];
        ll p=parent[node];
        if(distant[p]==-1){
            cout << -1 << endl;
            return;
        }
        distant[node]=i-1;
        edge_w[node]=distant[node]-distant[p];
    }
    for(ll i=1;i<=n;i++) cout << edge_w[i] << " ";
    cout << endl;
    return ;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}