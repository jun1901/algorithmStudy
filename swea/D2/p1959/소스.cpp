#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int n, m, len, MAX = 0, sum;
		cin >> n >> m;
		vector<int> a(n), b(m);
		bool sw = true;

		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < m; i++) cin >> b[i];
		if (n > m) {
			int temp = n;
			n = m;
			m = temp;
			sw = false;
		}
		len = m - n + 1;
		for (int i = 0; i < len; i++)
		{
			sum = 0;
			for (int j = 0; j < n; j++) sum += (sw ? a[j] * b[i + j] : b[j] * a[i + j]);
			MAX = max(MAX, sum);
		}

		cout << "#" << tc << " " << MAX << endl;
	}

	return 0;
}