#include <iostream>
using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int money[8] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int num, cnt[8] = { 0 };
		cin >> num;
		for (int i = 0; i < 8; i++)
		{
			cnt[i] = num / money[i];
			num %= money[i];
		}

		cout << "#" << tc << endl;
		for (int n : cnt) cout << n << " ";
		cout << endl;
	}

	return 0;
}