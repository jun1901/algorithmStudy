#include <iostream>
using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int T, m1,d1,m2,d2;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int total = 0;
		cin >> m1 >> d1 >> m2 >> d2;
		for (int i = m1; i < m2; i++) total += days[i];
		total -= d1 - 1;
		total += d2;
		
		cout << "#" << tc << " " << total << endl;
	}

	return 0;
}