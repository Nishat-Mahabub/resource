#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
#define allr(v)  v.rbegin(), v.rend()
#define N (ll)(2e5 +1)
#define f first
#define s second
#define pb push_back
#define el '\n'
#define ppl pair<ll,pair<ll,ll>>
#define vl vector<ll> 
#define vvl vector<vector<ll> > 
#define vpl vector<pair<ll,ll>>
#define mod (ll)(1e9+7)
void print(vl &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}
//===================== Main problem Code starts from here =======================//

bool cal(vector<ll> &v,ll x,ll k){
    ll cost=0;
    for(auto d:v){
        if(d<x) cost+=x-d;
    }
    return cost>=k;
}
ll c(vector<ll> &v,ll x,ll k){
    ll cost=0;
    for(auto d:v){
        if(d<x) cost+=x-d;
    }
    return cost;
}

void solve(){
        ll n,k;cin >> n >> k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        ll l = *min_element(v.begin(),v.end());
        ll r = 1e13;
        while(l<r){
            ll mid = (l+r)/2;
            if(cal(v,mid,k)){
                r=mid;
            }
            else l=mid+1;
            
        }
        ll x = r;
        if(c(v,x,k)>k) x--;
        ll ans=n*x - (n-1);
        ll ct=0;
        ll rr = k - c(v,x,k);
            for(int i=0;i<n;i++){
                v[i]-=x;
            }

            for(int i=0;i<n;i++){
                if(v[i]>0) ct++;
            }
        ans+=ct+rr;
        cout << ans << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}