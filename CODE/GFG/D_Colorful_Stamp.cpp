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
        string s;cin >> s;
        ll ctb=0,ctr=0;
        bool flag=true;
        for(ll i=0;i<n;i++){
            if(s[i]!='W'){
                while(s[i]!='W' && i<n){
                    if(s[i]=='B') ctb++;
                    else ctr++;
                    i++;
                }
                if(ctb==0 || ctr==0){
                    cout << "NO" << endl;
                    flag=false;
                    break;
                }
            }
            ctr=0;
            ctb=0;
        }
        if(flag) cout << "YES" << endl;
    }
    return 0;
}