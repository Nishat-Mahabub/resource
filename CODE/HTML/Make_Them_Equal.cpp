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
        vector<ll> ov,ev;
        ll data;
        for(int i=1;i<=n;i++){
            cin >> data;
            if(data&1) ov.push_back(data);
            else ev.push_back(data);
        }
        //cout << ov.size() << " " << ev.size() << endl;
        ll o_x=ov.size();
        ll e_x=ev.size();
        if(ov.size()==0 || ev.size()==0) cout << 0 << endl;
        else if(o_x&1) cout << e_x << endl;
        else if((o_x/2)<e_x) cout << o_x/2 << endl;
        else cout << e_x << endl;
    }
    return 0;
}