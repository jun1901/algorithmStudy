#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	vector<int> list;
	int n;
	cin >> n;
	int num = sqrt(n);
	for (int i = 1; i <= num; i++)
	{
		if (n % i != 0) continue;
		list.push_back(i);
		list.push_back(n/i);
	}

	sort(list.begin(), list.end());

	for (int i : list) cout << i << " ";


	return 0;
}