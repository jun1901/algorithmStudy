#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int result = 1, n;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		cout << result << " ";
		result *= 2;
	}


	return 0;
}