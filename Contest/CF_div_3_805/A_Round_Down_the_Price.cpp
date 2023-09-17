
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        double m;
        cin >> m;
        int x=(log10(m));
        int n=1;
        for(int i=1;i<=x;i++) n*=10;
        cout <<setprecision(100) <<  m-n << endl;
    }
    return 0;
}