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
        ll n;cin >> n;
        vector<ll> v1(n);
        vector<ll> v2(n);
        for(ll i=0;i<n;i++) cin >> v1[i];
        for(ll i=0;i<n;i++) cin >> v2[i];
        for(ll i=0;i<n;i++){
            if(v1[i]>v2[i]){
                swap(v1[i],v2[i]);
            }
        }
        ll x=*max_element(v2.begin(),v2.begin()+n-1);
        ll y=*max_element(v1.begin(),v1.begin()+n-1);
        if(x<=v2[n-1] && y<=v1[n-1]){
            cout << "Yes" << endl;
            return;
        }
        cout << "No" << endl;
        deb(n);

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}