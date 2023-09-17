#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        string s;
        cin >> s;
        ll sum=0;
        ll len=s.size();
        for(ll i=0;i<len;i++){
            sum+= s[i]-'a'+1;
        }
        if(len%2==0) cout << "Alice " << sum << endl;
        if(len&1){
            if(len==1) cout << "Bob " << sum << endl;
            else{
                if(s[0]>s[len-1]) cout << "Alice " << sum- 2*(s[len-1] -'a'+1)  << endl;
                else cout << "Alice " << sum-2*(s[0] -'a'+1) << endl;
            }
        }
        return;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}