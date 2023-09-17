#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,s;cin >> n >> s;
        ll sum=0;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin >> v[i];
            sum+=v[i];
        }
        ll ms=0;
        if(sum<s) cout << -1 << endl;
        else if(s==sum) cout << 0 << endl;
        else{
            ll l=0,r=0;
            sum=0;
            while(l<n){
                while(r<n && sum + v[r] <=s ){
                    sum+=v[r++];
                }
                ms=max(ms,r-l);
                sum-=v[l++];
            }
            cout << n-ms << endl;
        }
        
    }
    return 0;
}