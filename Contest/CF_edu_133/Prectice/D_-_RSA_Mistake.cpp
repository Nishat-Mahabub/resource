#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll a,b;cin >> a >> b;
        map<ll,ll> mp;
        if(a==b){
            cout << "no credit" << endl;
            return;
        } 
        else{
            bool fa=true,fb=true;
            for(ll i=2;i*i<=a;i++){
                if(a%i==0){
                    fa=false;
                    mp[i]++;
                    mp[a/i]++;
                }
            }
            for(ll i=2;i*i<=b;i++){
                if(b%i==0){
                    fb=false;
                    mp[i]++;
                    mp[b/i]++;
                }
            }
            if(fa && fb){
                cout << "full credit" << endl;
            }
            else{
                mp[a]++;
                mp[b]++;
                for(auto x:mp){
                    if(x.sec>=2){
                        cout << "no credit" << endl;
                        return;
                    }
                }
                cout << "partial credit" << endl;
            }
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}