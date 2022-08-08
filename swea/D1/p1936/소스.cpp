#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int a, b;
	cin >> a >> b;
	if (b == a + 1 || b + 2 == a) cout << "B";
	else cout << "A";


	return 0;
}