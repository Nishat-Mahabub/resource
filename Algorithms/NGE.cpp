#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

vector<ll> nge(vector<ll> &v){
        vector<ll> v_nge(v.size());
        stack<ll> s;
        for(ll i=0;i<v.size();i++){
            while(!s.empty() && v[i]>v[s.top()]){
                v_nge[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            v_nge[s.top()]=-1;
            s.pop();
        }
        return v_nge;
}

void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        vector<ll> v_nge=nge(v);
        for(ll i=0;i<n;i++) cout << (v_nge[i]==-1 ? -1:v[v_nge[i]]) << " ";
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}