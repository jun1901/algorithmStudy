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
		int n,sum = 0;
		cin >> n;
		for (int i = 1; i <= n; i += 2) sum += i;
		for (int i = 2; i <= n; i += 2) sum -= i;
		cout << "#" << tc << " " << sum << endl;
	}

	return 0;
}