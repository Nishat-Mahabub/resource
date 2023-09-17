#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)

vector<ll> nle(vector<ll> &v){
    stack<ll> s;
    vector<ll> ans(v.size());
    for(ll i=v.size()-1;i>=0;i--){
        while(!(s.empty())){
            if(v[i]<v[s.top()]){
                ans[s.top()]=i+1;
                s.pop();
            }
            else break;
        }
        s.push(i);
    }
    while(!(s.empty())){
        ans[s.top()]=0;
        s.pop();
    }
    return ans;

}

void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(auto &x:v) cin >> x;
        // reverse(v.begin(),v.end());
        vector<ll> ans=nle(v);
        // reverse(ans.begin(),ans.end());
        for(auto x:ans) cout << x << " ";
        cout << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}