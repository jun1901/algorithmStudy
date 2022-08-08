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
		int a, b;
		cin >> a >> b;
		cout << "#" << tc << " " << a / b << " " << a % b << endl;
	}


	return 0;
}