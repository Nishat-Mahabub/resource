#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll a,b,c;cin >> a >> b >> c;
        ll m=max(a,max(b,c));
        m*=3;
        ll x= m-(a+b+c);
        ll sum=0;
        bool flag=true;
        for(ll i=0;i<=32;i++){
            sum+=(1<<i);
            if(sum==x) {
                cout << "YES" << endl;
                flag = false;
                break;
            }
        }
        if(flag) cout << "NO" << endl;
    }
    return 0;
}