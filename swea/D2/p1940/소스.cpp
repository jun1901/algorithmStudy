#include <iostream>
#include <cmath>
using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int dist = 0, speed = 0, n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int change, s;
			cin >> change;
			switch (change)
			{
			case 1: 
				cin >> s;
				speed += s;
				break;
			case 2: 
				cin >> s;
				speed -= s;
				speed = max(speed, 0);
				break;
			}
			dist += speed;
		}
		cout << "#" << tc << " " << dist << endl;
	}

	return 0;
}