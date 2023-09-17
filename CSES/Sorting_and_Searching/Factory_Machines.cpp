#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
#define N (ll)2e5 +1
vector<ll> v(N);
ll n,k;

ll product(ll time){
    ll ans=0;
    for(ll i=0;i<n;i++){
        // cout << time/ v[i] << endl;
        ans+=(time/v[i]);
        if(ans > k) break;
    }
    return ans;
}

void solve(){
        cin  >> n >> k;
        for(ll i=0;i<n;i++) cin >> v[i];
        ll mx=*max_element(v.begin(),v.begin()+n);
        ll l=1,r=mx*k +1;
        ll mid;
        ll ans;
        while(l<=r){
             mid=l+(r-l)/2;
             ll x=product(mid);
            //  cout <<  mid << " Product  : " << x << endl;
            if(x>=k){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}