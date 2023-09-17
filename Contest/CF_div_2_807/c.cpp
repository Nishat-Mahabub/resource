#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,c,q;
        cin >> n >> c >> q;
        string s;cin >> s;
        vector<pair<ll,ll>> op;
        vector<pair<ll,ll>> seg;
        ll len=n;
        for(ll i=0;i<c;i++){
            ll l,r;cin >> l >> r;
            op.push_back({l,r});
            seg.push_back({len+1,len+(r-l)+1});
            len=seg[i].sec;
        }
        while(q--){
            ll k;cin >> k;
            if(k<=n) cout << s[k-1] << endl;
            else{
                for(ll i=c-1;i>=0;i--){
                    if(k<=seg[i].sec && k>=seg[i].fst){
                        k=(k-seg[i].fst)+op[i].fst;
                    }
                }
                cout << s[k-1] << endl;
            }
        }
    }
    return 0;
}