#include <iostream>
#include <cmath>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int tc;
	cin >> tc;

	for (int i = 1; i <= tc; i++)
	{
		int avg = 0, n;
		for (int j = 0; j < 10; j++)
		{
			cin >> n;
			avg += n;
		}
		cout << "#" << i << " " << round(avg / 10.0) << endl;
	}

	return 0;
}