#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int n, m, MAP[15][15] = { 0 }, max = 0;
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> MAP[i][j];
				if (i + 1 < m || j + 1 < m) continue;
				int sum = 0;
				for (int y = 0; y < m; y++)
					for (int x = 0; x < m; x++) sum += MAP[i - y][j - x];
				if (max < sum) max = sum;
			}
		}
		cout << "#" << tc << " " << max << endl;
	}

	return 0;
}