#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll a,b,k;cin >> a >> b >> k;
        string s1,s2;cin >> s1 >> s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        ll i=0;ll j=0;
        string ans;
        ll s1k=0,s2k=0;
        while(i<s1.size() && j<s2.size()){
            if(s1[i]<s2[j]){
                if(s1k<k){
                    ans.push_back(s1[i]);
                    i++;
                    s1k++;
                    s2k=0;
                }
                else{
                    ans.push_back(s2[j]);
                    j++;
                    s2k++;
                    s1k=0;
                }
            }
            else if(s1[i]>s2[j]){
                if(s2k<k){
                    ans.push_back(s2[j]);
                    j++;
                    s2k++;
                    s1k=0;
                }
                else{
                    ans.push_back(s1[i]);
                    i++;
                    s1k++;
                    s2k=0;
                }
            }
        }
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}