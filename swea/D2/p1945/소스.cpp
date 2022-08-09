#include <iostream>
using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int arr[] = { 2,3,5,7,11 };
	int T, n;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int cnt[5] = { 0 }, i = 0;
		cin >> n;
		while (i < 5) {
			if (n % arr[i] == 0) {
				cnt[i]++;
				n /= arr[i];
			}
			else i++;
		}
		cout << "#" << tc;
		for (int num : cnt) cout << " " << num;
		cout << endl;
	}

	return 0;
}