#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        cout << "Division ";
        if(n>=1900) cout << "1" << endl;
        else if(n>=1600 && n<=1899) cout << "2" << endl;
        else if(n>=1400 && n<=1599) cout << "3" << endl;
        else cout << "4" << endl;
    }
    return 0;
}

// 1900≤rating
// For Division 2: 1600≤rating≤1899
// For Division 3: 1400≤rating≤1599
// For Division 4: rating≤1399