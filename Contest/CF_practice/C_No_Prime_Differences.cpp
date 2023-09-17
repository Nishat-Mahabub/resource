#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
#define f first
#define s second
#define pb push_back
#define mod (ll)(1e9+7)
// #define mod (ll)(1e9+7)
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

bool prime[100000];
void SieveOfEratosthenes()
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <=100000; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= 100000; i += p)
                prime[i] = false;
        }
    }
}

void solve(){
    ll m, n;
    cin >> m >> n;
    if((!prime[m] && !prime[n]) || (prime[m] && !prime[n])){
        for (ll i = 1; i <= m*n;i++){
            cout << i << " ";
            if(i%n==0)
                cout << endl;
        }
        cout << endl;
    }
    else if(prime[m] && !prime[n]){
        vector<vector<int>> v(m, vector<int>(n));
        ll ct = 1;
        for (ll j = 0; j < n;j++){
            for (ll i = 0; i < m;i++){
                v[i][j] = ct++;
            }
        }
        for (auto x:v){
            for(auto y:x)
                cout << y << " ";
            cout << endl;
        }
        cout << endl;
    }
    else{
        ll ct = 0;
        for (ll i = 1; i <= m * n;i+=2){
            cout << i << " ";
            ct++;
            if(ct%n==0)
                cout << endl;
            
        }
        for (int i = 2; i <= m * n - 1;i+=2){
            cout << i << " ";
            ct++;
            if(ct%n==0)
                cout << endl;
        }
        cout << endl;
    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    SieveOfEratosthenes();
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}