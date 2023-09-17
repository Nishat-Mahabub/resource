#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve() {
    int n,k; cin>>n>>k;
    vector<ll> s(k);
    for(ll i=0;i<k;i++) cin >> s[i];
    int max_val = INT_MAX;
    for(int i = k-2;i>=0;i--) {
        int val = s[i+1] - s[i];
        if(val > max_val) {
            cout<<"NO"<<endl; return;
        }
        max_val = val;
    }
    
    int rem = n-k+1;
    // SHOW(max_val); SHOW(rem);
    
    // if(s[0] > 0 && ((s[0]/rem) < max_val || ((s[0]/rem) == max_val && (s[0]%rem) == 0))) {
    //     cout<<"YES"<<endl;
    // }
    // else if(s[0] < 0 && (rem*max_val) >= s[0])
    cout << "rem : " << rem << " max_val : " << max_val << endl;
    //     cout<<"YES"<<endl;
    if(rem*max_val >= s[0])
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}