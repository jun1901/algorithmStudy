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
		int max = 0, num;
		for (int j = 0; j < 10; j++)
		{
			cin >> num;
			if (max < num) max = num;
		}
		cout << "#" << i << " " << max << endl;
	}

	return 0;
}