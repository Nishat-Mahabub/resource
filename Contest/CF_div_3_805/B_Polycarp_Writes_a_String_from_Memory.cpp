#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        string st;cin >> st;
        set<char> mp;
        int days=0;
        for(int i=0;i<st.size();i++){
            mp.insert(st[i]);
            if(mp.size()==4){
                days++;
                i--;
                mp.clear();
            }
        }
        if(mp.size()>0) days++;
        cout << days << endl;
    }
    return 0;
}