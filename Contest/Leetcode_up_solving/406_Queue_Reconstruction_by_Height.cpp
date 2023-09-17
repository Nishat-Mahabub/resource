#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        int x=a.size()-1;
        int y=b.size()-1;
        char carry='0';
        string result;
        while(x>=0 && y>=0){
            if((a[x]=='1' && b[y]=='0') || (a[x]=='0' && b[y]=='1')){
                if(carry=='0'){
                    result.push_back('1');
                }
                else{
                    result.push_back('0');
                    carry='1';
                }
            }
            else if((a[x]=='0' && b[y]=='0')) {
                if(carry=='0'){
                    result.push_back('0');
                }
                else{
                    result.push_back('1');
                    carry='0';
                }
            }
            else{
                if(carry=='0'){
                    result.push_back('0');
                    carry='1';
                }
                else{
                    result.push_back('1');
                    carry='1';
                }
            }
            x--,y--;
        }
        while(x>=0){
            if(a[x]=='1'){
                if(carry=='1'){
                    result.push_back('0');
                    carry='1';
                }
                else{
                    result.push_back('1');
                }
            }
            else{
                if(carry=='1'){
                    result.push_back('1');
                    carry='0';
                }
                else{
                    result.push_back('0');
                }
            }
            x--;
        }
        while(y>=0){
            if(b[y]=='1'){
                if(carry=='1'){
                    result.push_back('0');
                    carry='1';
                }
                else{
                    result.push_back('1');
                }
            }
            else{
                if(carry=='1'){
                    result.push_back('1');
                    carry='0';
                }
                else{
                    result.push_back('0');
                }
            }
            y--;
        }
        if(carry=='1') result.push_back('1');
        reverse(result.begin(),result.end());
       cout  << result << endl;

    }
    return 0;
}