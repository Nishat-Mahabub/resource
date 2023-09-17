#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
void solve(){
        ll n;cin >> n;
        vector<pair<ll,ll>> time(n);
        vector<pair<ll,ll>> v;
        ll max_cus=INT_MIN;
        for(ll i=0;i<n;i++){
            cin >> time[i].first >> time[i].second;
            v.push_back({time[i].first,1});
            v.push_back({time[i].second,0});
        }
        sort(v.begin(),v.end());
        ll arrival_count=0;
        for(ll i=0;i<v.size();i++){
            if(v[i].second==1) arrival_count++;
            else if(v[i].second==0)  arrival_count--;
            max_cus=max(max_cus,arrival_count);
        }
        cout << max_cus << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;
    while(t--){
        solve();
    }
    return 0;
}