#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int n, num, max = 0;
		long long sum = 0;
		stack<int> s;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			s.push(num);

		}

		while (!s.empty()) {
			num = s.top(); s.pop();
			if (max < num) {
				max = num;
				continue;
			}
			sum += max - num;
		}

		cout << "#" << tc << " " << sum << endl;

	}

	return 0;
}