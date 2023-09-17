#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

void print_binary(ll x){
    if(x==0) return ;
    print_binary(x/2);
    cout << x%2;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll x;cin >> x;
        // cout << "Binary of x : ";
        // print_binary(x);
        // cout << endl;
        if(x==1){
            cout << 3 << endl;
            continue;
        }
        ll y;
        if(x&1){
            // x>>=1;
            // ll ct=1;
            // while(x!=0){
            //     if(x&1) break;
            //     x>>=1;
            //     ct++;
            // }
            //  y=(1 << ct);
             cout << 1 << endl;
            // cout <<"Y-->" << y << endl << "Binary of y : ";
        }
        else{
            ll ct=0;
            while(x!=0){
                if(x&1) break;
                x>>=1;
                ct++;
            }
            y=(1 << ct);
            if(x==1) y++;
            cout << y << endl;
            // cout <<"Y-->" << y << endl << "Binary of y : ";
            // print_binary(y);
        }
        // print_binary(y);
        // cout << endl;
    }
    return 0;
}