#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;vector<ll> v(n);for(ll i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end());
        vector<ll> vc;
        ll counter=2;
        ll tmp=v[0]-v[1];
        for(ll i=1;i<n-1;i++){
            if(tmp==(v[i]-v[i+1])){
                counter++;
            }
            else{
                vc.push_back(counter);
                counter=1;
            }
            tmp=v[i]-v[i+1];
        }
        vc.push_back(counter);
        for(ll i=0;i<vc.size();i++){
            cout << vc[i] << endl;
        }
        //cout << n- *max_element(vc.begin(),vc.end()) << endl;
    }
    return 0;
}