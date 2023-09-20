// CPP program to illustrate substr()
#include <string.h>
#include <iostream>
using namespace std;

int minimumPartition(string s, int kk) {
        string k = to_string(kk);
        int num=k.size();
        int ans=0;
        for(int i=0;i<s.size();i+=num){
            string ss=s.substr(i,num);
            // cout << ss << endl;
            if(num==1 && ss>k) return -1;
            else if(ss<=k) ans++;
            else ans+=2;
        }
        for(int i=0;i<s.size();i++){
            string ss=s.substr(i,num);
            if(ss<k)ans--;
        }
        return ans;
}

int main(){
    string s;
    int k;cin >> s >> k;
    cout << minimumPartition(s,k) << endl;
}
 
// int main()
// {
//     // Take any string
//     string s1 = "Geeks";
 
//     // Copy two characters of s1 (starting
//     // from position 3)
//     string r = s1.substr(3, 5);
 
//     // prints the result
//     cout << "String is: " << r;
 
//     return 0;
// }