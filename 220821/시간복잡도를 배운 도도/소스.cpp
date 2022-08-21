#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    int n, MAX = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int cnt = 0, index = -1;
        while (1) {
            index = s.find("while", index + 1);
            if (index == -1) break;
            cnt++;
        }
        while (1) {
            index = s.find("for", index + 1);
            if (index == -1) break;
            cnt++;
        }
        MAX = max(MAX, cnt);
    }

    cout << MAX;

    return 0;
}