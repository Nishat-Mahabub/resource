#include <iostream>
#include <string>
using namespace std;

string findVerticalWord(string grid[8]) {
    string verticalWord = "";
    for (int col = 0; col < 8; col++) {
        for (int row = 0; row < 8; row++) {
            if (grid[row][col] != '.') {
                verticalWord += grid[row][col];
            }
        }
    }
    return verticalWord;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string grid[8];
        for (int i = 0; i < 8; i++) {
            cin >> grid[i];
        }

        string result = findVerticalWord(grid);
        cout << result << endl;
    }

    return 0;
}
