#include <bits/stdc++.h>
using namespace std;
#define deb(x)           \
    cout << #x << " = "; \
    print(x)
#define ll long long
#define all(v) v.begin(), v.end()
#define N (ll)(2e5 + 1)
#define f first
#define s second
#define pb push_back
#define mod (ll)(1e9 + 7)
void print(vector<ll> &vec)
{
    for (ll i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
void print(ll x)
{
    cout << x << endl;
}
void print(char x)
{
    cout << x << endl;
}
void print(string &x)
{
    cout << x << endl;
}
//============================================//
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n-1);
    for (ll i = 0; i < n-1; i++)
        cin >> v[i];
    vector<ll> per(n + 1, 0);
    ll g=-1;
        map<ll, ll> mp;
    if (v[0] > n)
        g = v[0];
    else {
        per[v[0]] = 1;
        
        mp[v[0]]++;
    }

    ll sum = n * (n + 1) / 2;
    for (ll i = 0; i < n - 2; i++)
    {
        if (v[i + 1] - v[i] > n)
            g = v[i + 1] - v[i];
        else {
            per[v[i + 1] - v[i]] = 1;
            mp[v[i + 1] - v[i]]++;
        }

    }
    if(v[n - 2]> sum){
        cout << "NO" << endl;
        return;
    }
    if (v[n - 2] != sum)
    {

            if (sum - v[n - 2] > n) g = sum - v[n - 2];
            else {
                    per[sum - v[n - 2]] = 1;
                    mp[sum - v[n - 2]]++;
            }
    }
    ll mis_sum = 0;
    // deb(per);
    for (ll i = 1; i <= n; i++)
    {
        if (per[i] == 0)
            mis_sum += i;
    }
    ll dup = -1;

    for (auto x : mp)
    {
        if (x.second == 2)
        {
            dup = x.first;
            break;
        }
    }
    // deb(g);
    // deb(dup);
    // deb(mis_sum);
    if(mis_sum==0) {
        cout << "YES" << endl;
        return;
    }
    if (dup != -1 && mis_sum == dup)
    {
        cout << "YES" << endl;
        return;
    }
    if (g!=-1 && g == mis_sum)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}