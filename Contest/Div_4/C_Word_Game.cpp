#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        map<string,ll> mp;
        vector<string> v1,v2,v3; 
        string s;
        for(ll i=0;i<n;i++){
            cin >> s;
            v1.emplace_back(s); 
            mp[s]++;
        }
        for(ll i=0;i<n;i++){
            cin >> s;
            v2.emplace_back(s); 
            mp[s]++;
        }
        for(ll i=0;i<n;i++){
            cin >> s;
            v3.emplace_back(s); 
            mp[s]++;
        }
        ll ans_1=0,ans_2=0,ans_3=0;
        for(ll i=0;i<n;i++){
            if(mp[v1[i]]==2) ans_1+=1;
            if(mp[v1[i]]==1) ans_1+=3;
            if(mp[v2[i]]==2) ans_2+=1;
            if(mp[v2[i]]==1) ans_2+=3;
            if(mp[v3[i]]==2) ans_3+=1;
            if(mp[v3[i]]==1) ans_3+=3;
        }
        cout << ans_1 << " " << ans_2 << " " << ans_3 << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}