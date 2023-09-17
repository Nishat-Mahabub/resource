#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        string a,b;cin >> a >> b;
        if(a[a.size()-1]==b[b.size()-1] && a[a.size()-1]=='S'){
            if(a>b) cout << '<' << endl;
            else if(a<b) cout << '>' << endl;
            else cout << '=' << endl;
        }
        else if(a[a.size()-1]==b[b.size()-1] && a[a.size()-1]=='L'){
            if(a>b) cout << '>' << endl;
            else if(a<b) cout << '<' << endl;
            else cout << '=' << endl;
        }
        else if(a[a.size()-1]>b[b.size()-1]){
            cout << '<' << endl;
        }
        else if(a[a.size()-1]<b[b.size()-1]){
            cout << '>' << endl;
        }
        else cout << '=' << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}