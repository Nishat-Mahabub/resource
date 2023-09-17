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
        
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    implement_seive();
    while(t--){
        ll n;cin >> n;
        for(int i=2;i<=n;i++){
            if(seive[i]) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}