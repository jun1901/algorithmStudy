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
		cout << "#" << tc << endl;
		int arr[10][10] = { 0 }, n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				if (j == 0 || j == i) arr[i][j] = 1;
				else arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}