#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll q;cin >> q;
        ll s_len=0;
        ll t_len=0;
        ll mxS='a';
        ll mxT='a';
        while(q--){
            ll d,k;cin >> d >> k;
            string s;cin >> s;
            if(d==1){
                ll mx=*max_element(s.begin(),s.end());
                mxS=max(mxS,mx);
                s_len+=(k*s.size());
            }
            else if(d==2){
                ll mx=*max_element(s.begin(),s.end());
                mxT=max(mxT,mx);
                t_len+=(k*s.size());
            }

            if(mxT>'a') cout << "YES" << endl;
            else{
                if(mxS>'a') cout << "NO" << endl;
                else{
                    if(s_len<t_len) cout << "YES" << endl;
                    else cout << "NO" << endl;
                }
            }
            

        }

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}