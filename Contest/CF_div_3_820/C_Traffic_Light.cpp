#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;char c;cin >> n >> c;
        string s;cin >> s;
        if(c=='g'){
            cout << 0 << endl;
            return;
        }
        s+=s;
        vector<ll> v;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='g'){
                v.push_back(i);
            }
        }
        ll ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                int ind=lower_bound(v.begin(),v.end(),i) - v.begin();
                cout << ind << " " << v[ind];
                
                ans=max(ans,v[ind]-i);
            }
        }
            cout << endl;
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}