#include <iostream>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	string s;
	cin >> s;
	int l = s.length();

	for (int i = 0; i < l; i++) cout << s[i] - 'A' + 1 << " ";

	return 0;
}