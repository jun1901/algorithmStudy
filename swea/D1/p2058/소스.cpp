#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int num, sum = 0;
	cin >> num;

	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}

	cout << sum;

	return 0;
}