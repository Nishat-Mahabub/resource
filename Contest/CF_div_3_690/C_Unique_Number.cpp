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
        if(n>45){
            cout << -1 << endl;
            continue;
        }
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
    return 0;
}