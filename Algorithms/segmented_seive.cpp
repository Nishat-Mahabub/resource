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

vector<ll> getPrime(ll x){
    vector<ll> ret;
    for(ll i=2;i<=x;i++){
        if(seive[i]) ret.push_back(i); 
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    implement_seive();
    while(t--){
        ll l,r;cin >> l >> r;
        ll len=(r-l+1);
        //step 01: generate all prime till sqrt(r)
        // O(10^6)
        vector<ll> primes = getPrime(sqrt(r));
        //step 02: Crate a dummy array with preinitial value false;
        //O(10^6)
        vector<bool> dummy_vec(r-l+1,true);
        // step 03: for all prime number marks its element false;
        for(auto p:primes){
            ll firstMultiple=(l/p)*p;
            if(firstMultiple<l) firstMultiple+=p;
            for(ll j=max(firstMultiple,p*p);j<=r;j+=p){
                dummy_vec[j-l]=false;
            }
        }
        //print the prime number in range l to r;
        for(ll i=0;i<(r-l+1);i++) if(dummy_vec[i]) cout << i+l << " ";
        cout << endl;

    }
    return 0;
}