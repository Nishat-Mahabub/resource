#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
            vector<int> tmp;
            for(int j=0;j<n;j++){
                char data;cin >> data;
                tmp.push_back(data-'0');
            }
            v.push_back(tmp);
        }
        int ans=0;
        int span=n-2;
        for(int i=0;i<n/2;i++,span-=2){
            for(int j=0;j<=max(0,span);j++){
                int pos=0;
                int neg=0;
                if(v[i][i+j]){ pos++;}
                else neg++;
                if(v[i+j][n-i-1]) { pos++;}
                else neg++;
                if(v[n-i-1][n-j-i-1]) { pos++;}
                else neg++;
                if(v[n-j-i-1][i]) {pos++;}
                else neg++;
                // cout << pos << " " << neg << endl;
                ans+=min(pos,neg);
            }
        }
        cout << ans << endl;
    }
    return 0;
}