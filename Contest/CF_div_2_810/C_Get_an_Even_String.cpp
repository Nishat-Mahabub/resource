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
        map<char,ll> mp;
        string ans;
        for(ll i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                ans+=s[i];
                ans+=s[i+1];
                i++;
            }
            else{
                while(i<s.size() && mp[s[i]]!=1){
                    mp[s[i]]++;
                    i++;
                }
                if(i<s.size()){
                    ans+=s[i];
                    ans+=s[i];
                }
                mp.clear();
            }
        }
        cout <<  s.size()-ans.size() << endl;
    }
    return 0;
}