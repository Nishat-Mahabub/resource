#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
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
        ll n,k;
        cin >> n >> k;
        vector<ll> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end());
        ll i=0,j=n-1;
        ll sum=accumulate(v.begin(),v.end(),(ll)0);
        ll tmp=0;
        for(int i=n-k;i<n;i++){
            tmp+=v[i];
        }
        ll mn=tmp;
        ll ind=0;
        for(int i=n-k;i<n;i++){
            tmp+=(v[ind]+v[ind+1]-v[i]);
            // deb(tmp);
            mn=min(mn,tmp);
            ind+=2;
        }
        cout << sum -mn << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}