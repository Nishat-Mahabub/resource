#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll m,n;cin >> m >> n;
        char arr[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin >> arr[i][j];
            }
        }
        ll dm=0;
        for(int i=0;i<m;i++){
            bool ch=true;
            bool flag=false;
            for(int j=0;j<n;j++){
                if(arr[i][j]=='R'){
                    ch=false;
                    flag=true;
                    break;
                }
            }
            if(ch) dm++;
            if(flag) break;
        }
        //cout << dm << endl;
        ll rm=0;
        for(int j=0;j<n;j++){
            bool ch=true;
            bool flag=false;
            for(int i=0;i<m;i++){
                if(arr[i][j]=='R'){
                    ch=false;
                    flag=true;
                    break;
                }
            }
            if(ch) rm++;
            if(flag) break;
        }
        //cout << rm << endl;
        if(arr[dm][rm]=='R')cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}