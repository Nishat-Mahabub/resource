#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

ll chek(vector<ll> &v,ll s){
    ll count=0;
    ll sum=0;
    ll j=0;
    for(ll i=0;i<v.size();i++){
        sum+=v[i];
        if(sum==s){
            count+=i-j;
            j=i+1;
            sum=0;
        }
        if(sum>s) return -1;
    }
    return count;
}

void solve(){
        ll n;cin >> n;
        ll sum=0;
        ll ans=n-1;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
             cin >> v[i];
             sum+=v[i];
        }
        for(ll i=1;i*i<=sum;i++){
            if(sum%i==0){
                ll a=chek(v,i);
                ll b=chek(v,sum/i);
                if(a!=-1 )ans=min(ans,a);
                if(b!=-1 )ans=min(ans,b);
            }
        }
        cout << ans;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}