#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        string s;cin >> s;
        int p;cin >> p;
        int sum=0;
        vector<int> v(s.size());
        vector<pair<int,int>> vp; 
        for(int i=0;i<s.size();i++){
            sum+=s[i]-96;
            vp.push_back({s[i]-96,i});
        }
        if(sum<=p){
            cout << s << endl;
            continue;
        }
        sort(vp.rbegin(),vp.rend());
        int i=0;
        while(sum>p && i<vp.size()){
            v[vp[i].sec]=1;
            sum-=vp[i].fst;
            i++;
        }
        for(int i=0;i<s.size();i++) if(v[i]==0) cout << s[i];
        cout << endl; 

    }
}