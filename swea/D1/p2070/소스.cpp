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
		int a, b;
		cin >> a >> b;
		cout << "#" << i << (a > b ? " >" : a < b ? " <" : " =") << endl;
	}

	return 0;
}