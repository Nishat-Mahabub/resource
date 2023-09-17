#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll a,b;cin >> a >> b;
    cout << (a+b)-abs(a-b)-1<< endl;
    return 0;
}