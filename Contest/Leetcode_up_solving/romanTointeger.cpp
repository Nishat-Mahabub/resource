#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

map<char,int> mp;

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000

void pre(){
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    //MCMXCIV
    while(t--){
        int x;cin >> x;
        double low=1;
        double high=(double)x;
        while(high-low > 0.0000001){
            double mid=(high+low)/2;
            if(mid*mid<x){
                low=mid;
            }
            else{
                high=mid;
            }
        }
        cout << low << endl;
    }
    return 0;
}