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
        vector<ll> s(n),f(n);
        for(ll i=0;i<n;i++) cin >> s[i];
        for(ll i=0;i<n;i++) cin >> f[i];
        ll start=s[0];
        ll finish=f[0];
        cout << finish -  start<< " ";
        for(ll i=1;i<n;i++){
            if(f[i]<finish){
                cout << 0 << " ";
            }
            else{
                if(s[i]>finish){
                    cout << f[i] - s[i] << " ";

                }
                else cout << f[i] - finish<< " ";
                finish=f[i];
            }
        }
        cout << endl;
    }
    return 0;
}