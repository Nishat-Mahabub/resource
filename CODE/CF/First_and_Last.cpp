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
        ll m=INT_MIN;
        ll data;
        cin >> data;
        ll tmp=data;
        ll f=tmp;
        for(ll i=1;i<n;i++){
            cin >> data;
            if((tmp+data) > m) m=data+tmp;
            tmp=data;
        }
        if(tmp+f>m) m=tmp+f;
        cout << m << endl;
    }
    return 0;
}