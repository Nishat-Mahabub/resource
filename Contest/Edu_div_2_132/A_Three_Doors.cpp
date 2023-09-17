#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        int n;cin  >> n;
        vector<int> v(4);
        for(int i=1;i<4;i++){
             cin >> v[i];
        }
        vector<bool> vn(4,false);
        int r=3;
        while(r--){
            vn[n]=true;
            n=v[n];
        }
        if(vn[1] && vn[2] && vn[3] ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}