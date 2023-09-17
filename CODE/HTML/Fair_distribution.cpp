#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,k;cin >> n >> k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        ll min_num=INT_MAX;
        sort(v.begin(),v.end());
        for(ll i=0;i<n-k+1;i++){
            min_num = min(min_num,abs(v[i]-v[i+k-1]));
        }
        cout << min_num << endl;
    }
    return 0;
}