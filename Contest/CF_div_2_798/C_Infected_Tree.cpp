#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
ll n;

vector<ll> v[300001];
ll omit;


void dfs(ll cur,ll parent,ll level){
    if((v[cur].size()==3) || (v[cur].size()==2 && cur==1)){
        for(auto x:v[cur]){
            if(x!=parent) dfs(x,cur,level+1);
        }
    }
    else if(v[cur].size()==1 && cur!=1){
        omit=min(omit,2*level-1);
        return ;
    }
    else {
        omit=min(omit,2*level);
        return;
    }

}


void solve(){
    omit=LLONG_MAX;
        cin >> n;
        for(ll i=0;i<n+1;i++) v[i].clear();
        for(ll i=0;i<n-1;i++){
            ll a,b;cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        // for(int i=1;i<=n;i++){
        //     cout << i << " -> ";
        //     for(auto y:v[i]) cout << y << " ";
        //     cout << endl;
        // }
        dfs(1,-1,1);
        cout << n- omit << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}