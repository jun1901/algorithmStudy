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
		int n, MAP[7][7] = { 0 };
		string result[7][7] = {""};
		cin >> n;
		n--;
		for (int i = 0; i <= n; i++)
			for (int j = 0; j <= n; j++) cin >> MAP[i][j];

		for (int i = 0; i <= n; i++)
			for (int j = 0; j <= n; j++) {
				result[i][0] += to_string(MAP[n - j][i]);
				result[i][1] += to_string(MAP[n - i][n - j]);
				result[i][2] += to_string(MAP[j][n-i]);
			}

		cout << "#" << tc << endl;
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) cout << result[i][j] << " ";
			cout << endl;
		}
	}

	return 0;
}