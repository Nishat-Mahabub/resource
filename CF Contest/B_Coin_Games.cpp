#include <iostream>
#include <string>

using namespace std;

string winner(int n, string coins) {
    int count = 0;
    for(char c : coins) {
        if (c == 'U')
            count++;
    }
    if (count % 2 == 0)
        return "NO";  
    else
        return "YES";   
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string coins;
        cin >> n >> coins;
        cout << winner(n, coins) << endl;
    }
    return 0;
}
