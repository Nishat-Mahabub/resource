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
        string s;
        cin >> s;
        vector<ll> vs(n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='W')sum+=1;
            vs[i]=sum;
        }
        // for(ll i=0;i<n;i++) cout << vs[i] << " ";
        // cout << endl;
        ll ans=INT_MAX;
        k--;
        for(ll i=0;i<n-k;i++){
            if(s[i]=='W'){
                ans=min(ans,vs[i+k]-vs[i]+1);
            }
            else{
                ans=min(ans,vs[i+k]-vs[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}