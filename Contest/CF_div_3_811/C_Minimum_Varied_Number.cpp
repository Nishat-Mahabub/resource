#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        string s;
        for(int i=9;i>=1;i--){
            if(n-i>=0){
                n-=i;
                s+=i+48;
            }
            if(n==0) break;
        }
        reverse(s.begin(),s.end());
        cout << s << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}