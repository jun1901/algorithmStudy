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
		int h1, m1, h2, m2, h, m;
		cin >> h1 >> m1 >> h2 >> m2;
		h = h1 + h2 + (m1 + m2) / 60;
		if (h > 12) h -= 12;
		m = (m1 + m2) % 60;

		cout << "#" << tc << " " << h << " " << m << endl;
	}

	return 0;
}