#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Info
{
	int x1, x2, y;
};

int n, q;
vector<Info> Log;
vector<pair<int, int>> qs;

void setup() {
	cin >> n >> q;
	Log.resize(n + 1);
	qs.resize(q);
	for (int i = 1; i <= n; i++) cin >> Log[i].x1 >> Log[i].x2 >> Log[i].y;
	for (int i = 0; i < q; i++) {
		int num1, num2;
		cin >> num1 >> num2;
		qs[i].first = min(num1, num2);
		qs[i].second = max(num1, num2);
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cout.tie();
	cin.tie();

	setup();
	for (int i = 0; i < q; i++)
	{
		int sw = 1;
		int a = qs[i].first, b = qs[i].second;
		if ((Log[a].x1 <= Log[b].x1 && Log[b].x1 <= Log[a].x2) || (Log[a].x1 <= Log[b].x2 && Log[b].x2 <= Log[a].x2)) sw = 0;
		else {
			for (int j = a; j < b; j++)
				if (Log[j].x2 < Log[j + 1].x1) {
					sw = 0;
					break;
				}
		}
		cout << sw << endl;
	}

	return 0;
}