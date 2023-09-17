#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,q;cin >> n >> q;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.rbegin(),v.rend());
        vector<ll> vs(n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=v[i];
            vs[i]=sum;
        }
        while(q--){
            ll data;
            cin >> data;
            if(data>vs[n-1]){
                cout << -1 << endl;
                continue;
            }
            ll i;
            for(i=0;i<n;i++){
                if(vs[i]>=data){
                    break;
                }
            }
            cout << i+1 << endl;
        }
    }
    return 0;
}