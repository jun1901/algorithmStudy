#include <iostream>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++)
	{
		string input;
		cin >> input;
		string month = input.substr(4, 2);
		string day = input.substr(6);
		if (stoi(day) < 0 || stoi(day) > days[stoi(month)]) {
			cout << "#" << tc << " " << -1 << endl;
			continue;
		}
		cout << "#" << tc << " " << input.substr(0, 4) + "/" + month + "/" + day << endl;
	}

	return 0;
}