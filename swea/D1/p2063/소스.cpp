#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int arr[199] = { 0 };
	int n=0;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> arr[i];

	sort(arr, arr + n);
	int mid = round(n / 2);
	cout << arr[mid];


	return 0;
}