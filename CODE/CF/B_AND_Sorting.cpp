#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

ll ith_bit(ll x){
    ll ct=0;
    while(!(x&1)){
        ct++;
        x>>=1;
    }
    return ct;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        //cout << ith_bit(n) << endl;
        // cout << (1 << n) << endl ;
        vector<ll> ov,ev;
        ll data;

        for(ll i=0;i<n;i++){
            cin >> data;
            if(data&1) ov.push_back(data);
            else ev.push_back(data);
        }
        ll e=ev.size();
        ll o=ov.size();
        if(e==0) cout << 0 << endl;
        else if(o==0){
            ll min_o=INT_MAX;
            sort(ev.begin(),ev.end());
            for(ll i=0;i<e;i++){
                ll x=ith_bit(ev[i]);
                if(x<min_o) min_o=x;
            }
            cout << min_o + ev.size()-1 << endl;
        }
        else{
            
            if(e<=o) cout << e << endl;
            else{
                cout << o*(e/o) + (e%o) << endl;
            }
        }
    }
    return 0;
}