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
		int point[101] = { 0 }, MAX = 0,num;
		int n;
		cin >> n;
		for (int i = 0; i < 1000; i++)
		{
			cin >> num;
			point[num]++;
			if (point[num] > point[MAX] || (point[num] == point[MAX] && num > MAX)) MAX = num;
		}
		cout << "#" << n << " " << MAX << endl;
	}

	return 0;
}