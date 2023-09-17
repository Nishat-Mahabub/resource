#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<string> v(n);
        map<string,ll> freq;
        map<char,ll> f_freq;
        map<char,ll> s_freq;
        for(ll i=0;i<n;i++) {
            cin >> v[i];
            freq[v[i]]++;
            f_freq[v[i][0]]++;
            s_freq[v[i][1]]++;
        }
        ll ans=0;
        for(ll i=0;i<n;i++){
            ans+=max((ll)0,f_freq[v[i][0]]-freq[v[i]]);
            ans+=max((ll)0,s_freq[v[i][1]]-freq[v[i]]);
            if(freq[v[i]]>0) freq[v[i]]--;
            if(f_freq[v[i][0]]>0) f_freq[v[i][0]]--;
            if(s_freq[v[i][1]]>0) s_freq[v[i][1]]--;
        }
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