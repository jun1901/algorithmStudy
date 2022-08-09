#include <iostream>
using namespace std;

int main() { // ¼öÁ¤

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int MAP[9][9] = { 0 };
		bool sw = true;
		for (int i = 0; i < 9; i++)
		{
			bool check[10] = { 0 };
			for (int j = 0; j < 9; j++)
			{
				cin >> MAP[i][j];
				if (check[MAP[i][j]]) sw = false;
				check[MAP[i][j]] = 1;
			}
		}
		if (sw) {
			for (int i = 0; i < 9; i++)
			{
				bool check[10] = { 0 };
				for (int j = 0; j < 9; j++) {
					if (check[MAP[j][i]]) {
						sw = false;
						break;
					}
					check[MAP[j][i]] = 1;
				}
				if (!sw) break;				
			}
		}
		if (sw) {
			for (int i = 0; i < 9; i += 3)
			{
				for (int j = 0; j < 9; j += 3) {
					bool check[10] = { 0 };
					for (int y = 0; y < 3; y++)
					{
						for (int x = 0; x < 3; x++)
						{
							if (check[MAP[i + y][j +x]]) {
								sw = false;
								break;
							}
							check[MAP[i + y][j + x]] = 1;
						}
					}
					if (!sw) break;
				}
				if (!sw) break;
			}
		}

		cout << "#" << tc << " " << (sw ? 1 : 0) << endl;
	}

	return 0;
}