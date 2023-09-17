#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

void apply_operation(string& s, int l, int r) {
    // Apply the operation on the substring [l, r] of string s.
    int mask = ((1 << (r - l + 1)) - 1) << (l - 1);
    for (int i = 0; i < s.length(); ++i) {
        if (mask & (1 << i)) {
            s[i] = '1';
        }
    }
}

int count_different_strings(int n, int m, string &s, vector<pair<int, int>>& operations) {
    unordered_set<string> unique_strings;

    // Add the original string to the set.
    // unique_strings.insert(s);

    // Apply the operations on each copy and add the resulting strings to the set.
    for (int i = 0; i < m; ++i) {
        string copy = s;
        int l = operations[i].first;
        int r = operations[i].second;
        apply_operation(copy, l, r);
        unique_strings.insert(copy);
    }
    for(auto x:unique_strings) cout << x << endl;
    // Return the number of different strings obtained from all the copies.
    return unique_strings.size();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<pair<int, int>> operations(m);
        for (int i = 0; i < m; ++i) {
            cin >> operations[i].first >> operations[i].second;
        }

        int result = count_different_strings(n, m, s, operations);
        cout << result << "\n";
    }

    return 0;
}
