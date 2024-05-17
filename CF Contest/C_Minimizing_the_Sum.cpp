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
void solve(){
        ll n,k;cin >> n >> k;
        vector<ll> v(n);
        // for(int i=0;i<n;i++) cin >> v[i];
        for(int i=0;i<n;i++) cin >> v[i];
        ll sum=accumulate(v.begin(),v.end(),0);
        if(n==1){
            cout << sum << el;
            return;
        }
        // deb(sum);
        while(k--){
            ll mx=0;
            ll ind=0;
            for(int i=0;i<n;i++){
                if(i==0){
                    if(v[i+1]-v[i]>mx){
                        mx=v[i+1]-v[i];
                        ind = i;
                    }
                }
                else if(i==n-1){
                    if(v[i-1]-v[i]>mx){
                        mx=v[i-1]-v[i];
                        ind = i;
                    }
                }
                else{
                    if(v[i+1]-v[i]>mx){
                        mx=v[i+1]-v[i];
                        ind = i;
                    }
                    if(v[i-1]-v[i]>mx){
                        mx=v[i-1]-v[i];
                        ind = i;
                    }
                }
            }
            // deb(mx);
            // deb(ind);
            if(mx>0){
                if(ind==0){
                    sum-=mx;
                    v[ind+1]=v[ind];
                }
                else if(ind==n-1){
                        sum-=mx;
                        v[ind-1]=v[ind];
                }
                else{
                        if(v[ind+1]-v[ind]>v[ind-1]-v[ind]){
                            sum-=v[ind+1]-v[ind];
                            v[ind+1]=v[ind];
                        }
                        else{
                            sum-=v[ind-1]-v[ind];
                            v[ind-1]=v[ind];
                        }
                }
            }
            deb(v);
        }
        cout << sum << el;
        
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}