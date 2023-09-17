#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second


void solve(){
        
}

int secondsToRemoveOccurrences(string s) {
        int ans=0;
        while(true){
            bool fg=true;
            for(int i=0;i<s.size()-1;i++){
                if(s[i]=='0' && s[i+1]=='1'){
                    swap(s[i],s[i+1]);
                    i++;
                    fg=false;
                }
            }
            // cout << s << endl;
            if(fg) return ans; 
            else ans++;
        }
        return ans;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        string s;cin >> s;
        cout << secondsToRemoveOccurrences(s) << endl;
    }
    return 0;
}