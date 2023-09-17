#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,m;cin >> n >> m;
        string a,b;cin  >> a >> b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        bool flag=true;
        for(ll i=0;i<b.size()-1;i++){
           if(a[i]!=b[i]) flag=false;
        }
        if(flag==false) {
            cout << "NO" << endl;
            return;
        }else{
                for(ll i=b.size()-1;i<a.size();i++){
                    if(b[b.size()-1]==a[i]){
                        cout << "YES" << endl;
                        return ;
                    }
                }
        }
        cout << "NO" <<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}