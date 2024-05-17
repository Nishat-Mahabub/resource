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
        ll n;cin >> n;
        vector<ll> odd_count(n);
        vector<ll> nums(n);
        ll count=0;
        for(ll i=0;i<n;i++){
            cin >> nums[i];
            if(nums[i]&1) count++;
            odd_count[i]=count;
            if(i>0) nums[i]+=nums[i-1];
        }
        vector<ll> ans(n);
        ans[0]=nums[0];
        for(ll i=1;i<n;i++){
            ll x = (odd_count[i])/3 + (odd_count[i]%3==1);
            ans[i]=nums[i]-x;
        }
        for(auto x:ans) cout << x << " ";
        cout << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}