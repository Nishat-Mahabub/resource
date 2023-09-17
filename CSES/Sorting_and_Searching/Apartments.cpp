#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
void solve(){
        ll n,m,k;cin >> n >> m >> k;
        vector<ll> client(n);
        vector<ll> apart(m);
        for(ll i=0;i<n;i++) cin >> client[i];
        for(ll i=0;i<m;i++) cin >> apart[i];
        sort(client.begin(),client.end());
        sort(apart.begin(),apart.end());
        ll i=0,j=0,ans=0;
        while(i<n && j<m){
            if(client[i]<=apart[j]+k && client[i]>=apart[j]-k){
                ans++;
                i++;j++;
            }
            else if(apart[j]<client[i]) j++;
            else i++;
        }
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;
    while(t--){
        solve();
    }
    return 0;
}