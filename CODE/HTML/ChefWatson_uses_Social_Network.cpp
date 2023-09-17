#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    ll m,n;cin >> m >> n ;
    vector<ll> spe(n);
    for(int i=0;i<n;i++) cin >> spe[i];
    sort(spe.begin(),spe.end());
    ll i,p;
    string s;
    vector<ll,pair<ll,string>> vp(m);
    for(ll i=0;i<m;i++){
        cin >> i >> p >> s;
        vp[i].fst=i;
        vp[i].sec.fst = p;
        vp[i].sec=s;
    }
    sort(vp.begin(),vp.end());
    vector<pair<ll,string>> v1(n),v2(m-n);
    ll k=0;
    for(int i=0;i<m;i++){
        if(vp[i].fst==spe[k] && k<n){
            v1[k].fst=vp[i].fs
        }
    }
}