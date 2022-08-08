#include <iostream>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		string s;
		cin >> s;
		int l = s.length() / 2;
		bool sw = true;
		for (int i = 0; i < l; i++)
			if (s[i] != s[s.length() - 1 - i]) {
				sw = false;
				break;
			}
		cout << "#" << tc << " " << (sw ? 1 : 0) << endl;
	}

	return 0;
}