#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
#define N (ll)(2*1e5)
vector<ll> v(N);
ll n ;
// double cost(double same){
//     double c=0;
//     for(ll i=0;i<n;i++) c+=abs(same-(double)v[i]);
//     cout << c << endl;
//     return c;
ll cost(ll same){
    ll c=0;
    for(ll i=0;i<n;i++) c+=abs(same-v[i]);
    // cout << c << endl;
    return c;
}

// void ternary_search(double l, double r) {
//     cout << l << " " << r << endl;
//     double eps = 1e-9;              //set the error limit here
//     while (r - l > eps) {
//         double m1 = l + (r - l) / 3;
//         double m2 = r - (r - l) / 3;
//         double f1 = cost(m1);      //evaluates the function at m1
//         double f2 = cost(m2);      //evaluates the function at m2
//         if (f1 < f2)
//             l = m1;
//         else
//             r = m2;
//     }
//     cout <<"ans " <<  (ll)cost(l) << endl;                    //return the maximum of f(x) in [l, r]
// }

void solve(){
        cin >> n;
        for(ll i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.begin()+n);
        cout << cost(v[n/2]) << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}