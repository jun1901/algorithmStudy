#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) cout << (i != j ? "+" : "#");
		cout << endl;
	}


	return 0;
}