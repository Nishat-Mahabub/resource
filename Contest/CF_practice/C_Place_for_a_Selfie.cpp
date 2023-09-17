#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
#define allr(v)  v.rbegin(), v.rend()
#define N (ll)(2e5 +1)
#define f first
#define s second
#define pb push_back
#define mod (ll)(1e9+7)
void print(vector<ll> &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}
//    　　　　　＿＿
// 　　　　　／＞　 フ
// 　　　　　| _　 _ |
// 　 　　　／ミ _x ノ
// 　　 　 /　　　 　|
// 　　　 /　 ヽ　　 ﾉ
// 　 　 │　　|　|　|
// 　／￣|　　 |　|　|
// 　| (￣ヽ＿_ヽ_)__)
// 　＼二つ
//===================== Main problem Code starts from here =======================//
void solve(){
        ll n,x;cin >> n >> x;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        sort(all(v));
        ll ans=0;
        for(ll i=0;i<n;i++){
            if(x<v[i]) break;
            ans++;
            x-=v[i];
            ans+=((x)/(i+1));
       }


        for(int i=1;i<=n;i++){
		    if(sum[i]>q)break;
		    ll le=1,ri=1e9+10,ans=0;
		    while(le<=ri){
			    ll mid=(le+ri)>>1;
			    if(i*(mid-1)+sum[i]<=q)
                {le=mid+1;
                ans=mid;}
			    else ri=mid-1;
		    }
            an+=ans;
	    }

       cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}