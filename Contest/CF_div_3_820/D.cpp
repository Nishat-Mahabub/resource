#include <bits/stdc++.h>
#include <iostream>
#define pb(a) push_back(a)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, n) for (ll i = 0; i < n; i++)
#define vep(i, j, n) for (int i = j; i < n; i++)
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    int pos[1010];
    memset(pos, 0, sizeof pos);
    for(int i = 1; i <= n; i++){
        int x; cin >> x; pos[x] = i;
    }
    int ans = -1;
    for(int i = 1; i <= 1000; i++) for(int j = 1; j <= 1000; j++){
        if(pos[i] != 0 && pos[j] != 0 && __gcd(i, j) == 1 ) ans=max(ans, pos[i] + pos[j]);
    }
    cout << ans << '\n';
}

int main()
{
    ll t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n;
        cin >> n;
        map<ll, ll> m;
        vector<ll> v(n);
       
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            m[v[i]] = i + 1;
            
        }
        ll ans = -1;
        for (auto i : m)
        {
            for (auto j : m)
            {
                if (__gcd(i.first, j.first) == 1)
                {
                    ans = max(ans, i.second + j.second);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}