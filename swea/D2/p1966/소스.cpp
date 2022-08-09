#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int T, n;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int arr[50] = { 0 };
		cin >> n;
		for (int i = 0; i < n; i++) cin >> arr[i];

		sort(arr, arr + n);
		cout << "#" << tc << " ";
		for (int i = 0; i < n; i++) cout << arr[i] << " ";
		cout << endl;
	}

	return 0;
}