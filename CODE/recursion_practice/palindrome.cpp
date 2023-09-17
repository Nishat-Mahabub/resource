#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

bool palindrome(ll i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return palindrome(i+1,s);
}

void solve(){
        string s;cin >> s;
        if(palindrome(0,s)) cout << "YES" << endl;
        else cout << "NO" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}