#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int minimizeXor(int num1, int num2) {
        int set_bit=__builtin_popcount(num2);
        string s;
        while(num1){
            if(num1&1)  s.push_back('1');
            else s.push_back('0');
            num1>>=1;
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if(set_bit>0 && s[i]=='1'){
                s[i]=='1';
                set_bit--;
            }
            else s[i]='0';
        }
        cout << "num1 " << s << endl;
    }
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        int a,b;cin >> a >> b;
        minimizeXor(a,b);
    }
    return 0;
}