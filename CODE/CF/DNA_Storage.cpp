#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n; cin >> n;
        string s;cin >> s;
        for(ll i=0;i<n-1;i+=2){
            if(s[i]=='0' && s[i+1]=='0') cout << 'A';
            if(s[i]=='0' && s[i+1]=='1') cout << 'T';
            if(s[i]=='1' && s[i+1]=='0') cout << 'C';
            if(s[i]=='1' && s[i+1]=='1') cout << 'G';
        }
        cout << endl;
    }
    return 0;
}