#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define f first
#define s second
#define pb push_back
#define mod (ll)(1e9+7)
void print(vector<ll> &vec){
    for(ll i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}
void print(ll x){
    cout << x << endl;
}
void print(char x){
    cout << x << endl;
}
void print(string &x){
    cout << x << endl;
}
//============================================//



void solve(){
        char s[3][3];
        for(ll i=0;i<3;i++){
            for(ll j=0;j<3;j++){
                cin >> s[i][j];
            }
        }
        if(s[0][0]==s[0][1] && s[0][1]==s[0][2] && s[0][0]!='.') cout << s[0][0] << endl;
        else if(s[1][0]==s[1][1] && s[1][1]==s[1][2] && s[1][1]!='.' ) cout << s[1][1] << endl;
        else if(s[2][0]==s[2][1] && s[2][1]==s[2][2] && s[2][1]!='.') cout << s[2][1] << endl;

        else if(s[0][0]==s[1][0] && s[1][0]==s[2][0] && s[0][0]!='.') cout << s[0][0] << endl;
        else if(s[0][1]==s[1][1] && s[1][1]==s[2][1] && s[2][1] !='.') cout << s[1][1] << endl;
        else if(s[0][2]==s[1][2] && s[1][2]==s[2][2] && s[0][2]!='.') cout << s[0][2] << endl;

        else if(s[0][0]==s[1][1] && s[1][1]==s[2][2] && s[1][1]!='.') cout << s[1][1] << endl;
        else if(s[0][2]==s[1][1] && s[1][1]==s[2][0] && s[1][1]!='.') cout << s[1][1] << endl;
        else cout << "DRAW" << endl;

        

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}