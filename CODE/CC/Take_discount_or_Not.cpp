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
        ll sum=0,sum2=x;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            if(data>y) sum2+=data-y;
            sum+=data;
        }
        //cout << sum << " " << sum2 << endl;
        if(sum<=sum2) cout <<  "NO COUPON" << endl;
        else cout << "COUPON" << endl;
    }
    return 0;
}