#include <iostream>
using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int T, n;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int MAP[10][10] = { 0 };
		int r = 0, c = 0, i = 1;
		bool sc = true, sr = true;
		cin >> n;
		int en = n * n;
		while (i <= en) {
			if (sc && sr) {
				MAP[r][c++] = i++;
				if (MAP[r][c] != 0 || c >= n) {
					c--;
					r++;
					sc = !sc;
				}
			}
			else if (!sc && sr) {
				MAP[r++][c] = i++;
				if (MAP[r][c] != 0 || r >= n) {
					c--;
					r--;
					sr = !sr;
				}
			}
			else if (!sc && !sr) {
				MAP[r][c--] = i++;
				if (MAP[r][c] != 0 || c < 0) {
					c++;
					r--;
					sc = !sc;
				}
			}
			else if (sc && !sr) {
				MAP[r--][c] = i++;
				if (MAP[r][c] != 0 || r < 0) {
					c++;
					r++;
					sr = !sr;
				}
			}

		}

		cout << "#" << tc << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++) cout << MAP[i][j] << " ";
			cout << endl;
		}

	}

	return 0;
}