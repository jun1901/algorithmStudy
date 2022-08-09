#include <iostream>
#include <string>
using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		bool check[10] = { 0 };
		int sum = 0, k = 1, l;
		string n, result;
		cin >> n;
		while (!(check[0] && sum == 45)) {
			result = to_string(stoi(n) * k++);
			l = result.length();
			for (int i = 0; i < l; i++)
			{
				int num = result[i] - '0';
				if (check[num]) continue;
				check[num] = 1;
				sum += num;
			}
		}
		cout << "#" << tc << " " << result << endl;
	}

	return 0;
}