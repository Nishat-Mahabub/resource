#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl << "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define fileio                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define MOD 1000000007
// template<typename... T>
// void see(T&... args) { ((cin >> args), ...);}
 
bool help(ll mid, vector<int> a, int n){
    int k = 0; 
    int count = 1; 
    for(int i = 1; i < n; i++){
        if(a[i] - a[k] > 2*mid){
            k = i; 
            count++; 
        }
    }
    return count <= 3; 
}
 
void solve(){
    int n; 
    cin >> n;
    vector<int> a(n); 
    for(int i = 0; i < n; i++) cin >> a[i]; 
    sort(a.begin(), a.end());
    ll l = 0, h = a[n - 1];
    while (l <= h){
        ll mid = l + (h - l)/2; 
        if(help(mid, a, n)){
            h = mid - 1; 
        }
        else
            l = mid + 1; 
    }
    cout << l nl; 
}
 
int main(){
    IOS 
 
    int t; 
    cin >> t; 
    while(t--)
        solve();  
        
    return 0;
}