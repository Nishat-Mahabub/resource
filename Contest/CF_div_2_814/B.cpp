#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,m;cin >> n >> m;
        if(n&1){
            cout << "NO" << endl;
            return;
        }
        vector<pair<ll,ll>> ans;
        if(m&1){
            cout << "YES" << endl;
             for(ll i=1;i<=n;i+=2){
                cout << i << " " << i+1 <<endl;
             }
        }
        else{
            vector<ll> v;
            vector<ll> d;
            vector<ll> nv;
            for(ll i=1;i<=n;i++){
                if(i%2==0){
                    if(i%4==0) {
                        d.push_back(i);
                    }
                    else if((i+m)%4==0){
                    v.push_back(i);
                    }
                }
                else nv.push_back(i);
            }
            if(v.size() + d.size()==n/2){
                cout <<"YES" << endl;
                ll i=0,j=0,k=0;
                while(k<d.size()){
                    cout << nv[i] << " " << d[k] << endl;
                    i++,k++;
                }
                while(j<v.size()){
                    cout << v[j] << " " << nv[i] << endl;
                    i++ ,j++;
                }
            }
            else cout << "NO" << endl;
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}