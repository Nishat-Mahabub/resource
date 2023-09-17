#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

ll N=1e6+1;
vector<bool> seive(N,true);
void implement_seive(){
    for(ll i=2;i*i<=N;i++){
        for(ll j=i*i;j<N;j+=i){
            seive[j]=false;
        }
    }
}

void solve(){
        ll a,b;cin >> a >> b;
        if(a>b) swap(a,b);
        seive[1]=false;
        for(ll i=b;i>=a;i--){
            if(seive[i]) {
                cout << i << endl;
                return;
            }
        }
        cout << -1 << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    implement_seive();
    while(t--){
        solve();
    }
    return 0;
}