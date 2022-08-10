#include <iostream>
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
		int n, cnt[100001] = { 0 }, MAX=100000;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int num;
			cin >> num;
			num = abs(num);
			cnt[num]++;
			if (cnt[MAX] <= cnt[num] && MAX > num) MAX = num;
		}

		cout << "#" << tc << " " << MAX << " " << cnt[MAX] << endl;
	}

	return 0;
}