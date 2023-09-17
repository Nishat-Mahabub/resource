#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        vector<ll> va(n),vb(n);
        for(ll i=0;i<n;i++) cin >> va[i];
        for(ll i=0;i<n;i++) cin >> vb[i];
        ll cd=INT_MIN;
        bool flag1=false;
        for(ll i=0;i<n;i++){
           ll d=va[i]-vb[i];
           if(d<0){
               cout << "NO" << endl;
               flag1=true;;
               break;
           }
           if(d>cd) cd=d;
        }
        if(flag1) continue;
        // cout << "cd" << cd << endl;
        if(n==1 &&  cd>=0){
            cout << "YES" << endl;
            continue;
        }
        bool flag=true;
        for(ll i=0;i<n;i++){
            ll d=va[i]-vb[i];
            // cout << "d " << d << endl; 
            if(d!=cd){
                if(vb[i]==0) continue;
                else cout << "NO" << endl;
                flag=false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        
    }
    return 0;
}