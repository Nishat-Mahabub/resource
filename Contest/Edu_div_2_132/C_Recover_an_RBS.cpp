#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
       string s;cin >> s;
        int extra=0;
        int q=0;
       for(auto x:s){
        if(x=='(') extra--;
        else if(x==')') extra++;
        else q++;
       }
       int ob=(extra+q)/2;
       int cb=(q-extra)/2;
       if(ob==0 || cb==0 ){
            cout << "YES" << endl;
            continue;
       }
       string chek=string(ob-1,'(') + string(1,')') + string(1,'(') + string(cb-1,')');

       for(int i=0,j=0;i<s.size();i++){
        if(s[i]=='?'){
            s[i]=chek[j];
            j++;
        }
       }
        int suf=0;
        bool fg=true;
       for(int i=0;i<s.size();i++){
        if(s[i]=='(') suf++;
        else suf--;
        if(suf<0){
            cout << "YES" << endl;
            fg=false;
            break;
        }
       }
       if(fg && suf==0) cout << "NO" << endl;
    }
    return 0;
}