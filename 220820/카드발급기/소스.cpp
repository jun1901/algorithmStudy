#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cout.tie();
	cin.tie();

	int t;
	cin >> t;

	for (int tc = 0; tc < t; tc++)
	{
		int n;
		cin >> n;
		vector<int> keys(n + 1);
		vector<int> ranks(n + 1);
		bool sw = true;
		for (int i = 1; i <= n; i++) cin >> keys[i];
		for (int i = 1; i <= n; i++) {
			int num;
			cin >> num;
			ranks[num] = keys[i];
		}
		for (int i = 2; i <= n; i++)
			if (ranks[i] > ranks[i - 1]) {
				sw = false;
				break;
			}
		cout << (sw ? "YES" : "NO") << endl;
	}

	return 0;
}