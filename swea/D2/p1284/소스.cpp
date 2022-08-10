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
		int p, q, r, s, w;
		cin >> p >> q >> r >> s >> w;
		int aPrice = p * w;
		int bPrice = q + max(0, w - r) * s;

		cout << "#" << tc << " " << min(aPrice, bPrice) << endl;
	}

	return 0;
}