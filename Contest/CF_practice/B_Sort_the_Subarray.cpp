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
#define mod (ll)(1e9+7)
void print(vector<ll> &vec){
    for(ll i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}
void print(ll x){
    cout << x << endl;
}
void print(char x){
    cout << x << endl;
}
void print(string &x){
    cout << x << endl;
}
//============================================//
void solve(){
        ll n ;cin >> n;
        vector<ll> a(n), a_das(n);
        for (ll i = 0; i < n;i++) cin >> a[i];
        for (ll i = 0; i < n;i++) cin >> a_das[i];
        ll l=0;
        while(l<n && a[l]==a_das[l]) l++;
        while(l>0 && a_das[l-1]<=a_das[l]) l--;

        ll r=n-1;
        while(r>=0 && a[r]==a_das[r]) r--;
        while(r<n-1 && a_das[r+1]>=a_das[r]) r++;


        cout << l+1 << " " << r+1 << endl;


}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}