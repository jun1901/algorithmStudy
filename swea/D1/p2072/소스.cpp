#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int tc;
	cin >> tc;

	for (int i = 1; i <= tc; i++)
	{
		int sum = 0, num;
		for (int i = 0; i < 10; i++)
		{
			cin >> num;
			if (num & 1) sum += num;
		}
		cout << "#" << i << " " << sum << endl;
	}

	return 0;
}