#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,x,data;cin >> n >> x;
        set<ll> s;
        for(ll i=1;i<=n;i++){
            cin >> data;
            s.insert(data);
        }
        ll c= n-s.size();
        if(x<=c) cout << s.size() << endl;
        else{
            cout << n - x << endl;
        }

    }
    return 0;
}