#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end());
        vector<ll> ans;
        if(n&1){
            cout << "NO" << endl;
            return;
        }
        else{
            
            for(ll i=0;i<(n/2);i++){
                ans.push_back(v[i]);
                if(i+(n/2)<n ) ans.push_back(v[i+(n/2)]);
            }
            // for(auto x:ans) cout << x << " ";
            // cout << endl;
            if(!(ans[0]<ans[1] && ans[0]<ans[ans.size()-1]) ||
            !(ans[ans.size()-1]>ans[ans.size()-2] && ans[ans.size()-1]>ans[0])) {
                cout << "NO" << endl;
                return;
            }
            else{
                for(ll i=1;i<n-1;i++){
                    if((!(ans[i] > ans[i-1] && ans[i] > ans[i+1])) && (!(ans[i] < ans[i-1] && ans[i] < ans[i+1]))){
                        cout << "NO" << endl;
                        return;
                    }
                }
            }
        }
        cout << "YES" << endl;
        for(auto &x:ans) cout << x << " ";
        cout << endl;
        
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}