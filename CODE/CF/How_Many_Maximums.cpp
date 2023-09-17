#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        n--;
        string s;cin >> s;
        ll ct=0;
        char tmp;
        bool tmp2;
        if(n==1){
            cout << 1 << endl;continue;
        }
        for(ll i=0;i<n-1;i++){
            if(s[i]=='0') tmp='0';
            else if(tmp=='0' && s[i]=='1'){
                ct++;
                tmp='1';
                // cout << "This";
            }
        }
        if(s[n-1]=='0') ct++;
        if(s[0]=='1') ct++;
        cout << ct << endl;
    }
    return 0;
}