#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
void solve(){
        ll n;cin >> n;
        vector<int> s;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            auto it=upper_bound(s.begin(),s.end(),data);
            if(it==s.end()) s.push_back(data);
            else {
                s[it- s.begin()]=data;
            }
        }
        cout << s.size() << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}