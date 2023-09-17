#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        string s;
        cin >> s;
        ll l=0,r=0,u=0,d=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='L') l++;
            if(s[i]=='R') r++;
            if(s[i]=='U') u++;
            if(s[i]=='D') d++;
        }
        if(l>0 && r>0 && u>0 && d>0){
            ll y=min(u,d);
            ll z=min(l,r);
            cout << y*2 + z*2 << endl;
            for(ll i=0;i<z;i++) cout <<'L';
            for(ll i=0;i<y;i++) cout <<'D';
            for(ll i=0;i<z;i++) cout <<'R';
            for(ll i=0;i<y;i++) cout <<'U';
            cout << endl;
        }
        else if(u>0 && d>0){
            cout << 2 << endl;
            cout << "UD" << endl;
        }
        else if(l>0 && r>0){
            cout << 2 << endl;
            cout << "LR" << endl;
        }
        else cout <<0 <<endl <<  endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}