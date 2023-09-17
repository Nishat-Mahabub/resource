#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,x,y;cin >> n >> x >> y;
        string s;
        cin >> s;
        ll xp=0,yp=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='0')  xp++;
            if(s[i]=='1')  yp++;
        }
        if(xp==0 || yp==0) cout << 0 << endl;
        else cout << min(x,y) << endl;
        
    }
    return 0;
}   