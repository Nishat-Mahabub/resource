#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        // ll a_1=0,a_0=0,b_0=0,b_1=0;
        // for(ll i=0;i<n;i++){
        //     int data;cin >> data;
        //     if(data==1) a_1++;
        //     else a_0++;
        // }
        // for(ll i=0;i<n;i++){
        //     int data;cin >> data;
        //     if(data==1) b_1++;
        //     else b_0++;
        // }
        vector<ll> a(n),b(n);
        ll b_sort=0,a_sort=0;
        for(ll i=0;i<n;i++) cin >> a[i];
        for(ll i=0;i<n;i++) cin >> b[i];
        for(ll i=0;i<n;i++){
            if(a[i]!=b[i]) a_sort++;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        // for(auto x:a) cout << x << " ";
        // cout << endl;
        // for(auto x:b) cout << x << " ";
        // cout << endl;
        for(ll i=0;i<n;i++){
            if(a[i]!=b[i]) b_sort++;
        }
        // cout << a_sort << " " << b_sort << endl;
        cout << min(a_sort,b_sort+1) << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}