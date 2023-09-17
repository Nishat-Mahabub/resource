#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
ll n,k;
vector<ll> v(2e5 + 1);

bool subarray(ll sum){
    ll ct=0;
    ll cur_sum=0;
    for(ll i=0;i<n;i++){
        if(v[i]>sum) return false;
        if(cur_sum+ v[i] >sum) {
            ct++;
            cur_sum=0;
        }
        cur_sum+=v[i];
    }
    if(cur_sum>0) ct++;
    return ct<=k; 
}


void solve(){
        cin >> n >> k;
        for(ll i=0;i<n;i++) cin >> v[i];
        ll max_sum=accumulate(v.begin(),v.begin()+n,0);
        ll ans=0;
        ll left=0,right=max_sum;
        while(left<=right){
            ll mid=left+(right-left)/2;
            // ll subarr=subarray(mid);
            // cout << subarr << " mid " <<  mid << endl;
            // if(subarr==k) ans=mid;
            if(subarray(mid)){
                ans=mid;
                right=mid-1;
            }
            else left=mid+1;
        }
        cout << ans << "\n";
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}