#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt[256] = {0}; 

    for (char c : s) {
        cnt[c]++;
    }

    for (char c = 'A'; c <= 'Z'; c++) {
        if (cnt[c] > 0) {
            cout << c << " " << cnt[c] << '\n';
        }
    }
    for (char c = 'a'; c <= 'z'; c++) {
        if (cnt[c] > 0) {
            cout << c << " " << cnt[c] << '\n';
        }
    }

    return 0;
}
