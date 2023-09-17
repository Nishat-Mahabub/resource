#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
const long long N=1e9+7;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n; cin >> n;
        bool flag=false;
        if(n==1){
            cout << 1 << endl;
            continue;
        }
        ll x;
        ll b=3;
        ll ans=1;

            if(n%3==1){
                x=(n-4)/3;
            }
            else x=n/3;
             while(x){
                if(x&1) ans=(ans*b)%N;
                b=(b*b)%N;
                x >>=1;
            }
            if(n%3==1){
                cout << (ans*4)%N << endl;
            }
            else if(n%3==2) cout << (ans*2)%N << endl;
            else cout << ans%N << endl;
        
    }
    return 0;
}