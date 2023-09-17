#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        int n,m;cin >> n >> m;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        string s=string(m,'B');
        for(int i=0;i<n;i++){
            int ma,mn;
            ma=max(m+1-v[i],v[i]);
            mn=min(v[i],m+1-v[i]);
            if(s[mn-1]=='B') s[mn-1]='A';
            else s[ma-1]='A';
        }
        cout << s << endl;
    }
    return 0;
}