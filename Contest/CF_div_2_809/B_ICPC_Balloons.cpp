#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        string s;
        int n;cin >> n;
        cin >> s;
        set<int> ss;
        for(ll i=0;i<s.size();i++){
            ss.insert(s[i]);
        }
        // cout << ss.size() << endl;
        cout << ss.size()*2 + (s.size() - ss.size()) << endl;
    }
    return 0;
}