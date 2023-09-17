#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> buy(n),have(n);
        vector<ll> group;
        ll middle=0;
        for(ll i=0;i<n;i++) cin >> buy[i];
        for(ll i=0;i<n;i++) cin >> have[i];
        for(ll i=0;i<n;i++){
            group.push_back(have[i] - buy[i]);
        }
        // for(auto x:rich) cout << x << "->" << endl;
        sort(group.rbegin(),group.rend());
        // for(auto x:group) cout << x << " ";
        // cout << endl;
        int i=0,j=n-1;
        ll ans=0;
        while(i<j){
            if(group[i]+group[j] >=0){
                ans++;
                i++;
                j--;
            }
            else{
                j--;
            }
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