#include <iostream>
using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int T, n;
	int MAP[10][10];
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		MAP[10][10] = { 0 };
		int r = 0, c = 0, i = 1;
		bool sc = true, sr = true;
		cin >> n;
		while (i <= n * n) {
			if (c >= n || MAP[r][c] != 0) sc = !sc;
		}

	}

	return 0;
}