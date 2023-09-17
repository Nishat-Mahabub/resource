#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
#define f first
#define s second
#define pb push_back
#define mod (ll)(1e9+7)
#define N (ll)(2e5 +1)
void print(vector<ll> &vec){
    for(ll i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}
void print(ll x){
    cout << x << endl;
}
void print(char x){
    cout << x << endl;
}
void print(string &x){
    cout << x << endl;
}
//============================================//

vector<ll> range(N);

void calculate(){
    for (ll i = 1; i <= N;i++){
        ll count_2=0;
        ll x = i;
        while(!(x&1)){
            count_2++;
            x >>= 1;
        }
        range[i - 1] = count_2;
    }
}


void solve(){
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll total_2 = 0;
        for (ll i = 0; i < n;i++){
            cin >> v[i];
            ll x = v[i];
            while(!(x&1)){
                total_2++;
                x >>= 1;
            }
        }
        vector<ll> vec(range.begin(), range.begin() + n);
        sort(vec.rbegin(), vec.rend());
        // deb(total_2);
        // deb(vec);
        ll ans = 0;
        ll i = 0;
        while(total_2<n && i<n){
            total_2 += vec[i++];
            ans++;
        }
        if(total_2>=n)
            cout << ans << endl;
        else
            cout << -1 << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    calculate();
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}