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
        vector<ll> v1(n),v2(n);
        for(int i=0;i<n;i++) cin >> v1[i];
        for(int i=0;i<n;i++) cin >> v2[i];
        sort(v1.begin(),v1.end());
        bool flag=true;
        for(ll i=0;i<n;i++){
            if(v1[i]!=v2[i]){
                cout << "no" << endl;
                flag=false;
                break;
            }
        }
        if(flag) cout << "yes" << endl;
    }
    return 0;
}