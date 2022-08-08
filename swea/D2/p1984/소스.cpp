#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int arr[10] = { 0 }, sum = 0;
		for (int i = 0; i < 10; i++) cin >> arr[i];
		sort(arr, arr + 10);
		for (int i = 1; i < 9; i++) sum += arr[i];
		
		cout << "#" << tc << " " << round(sum/8.0) << endl;
	}

	return 0;
}