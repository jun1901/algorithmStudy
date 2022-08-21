#include <iostream>
#include <queue>
using namespace std;

int n, k, last;
int MAP[200001];
int result = 2e9;

void bfs() {
	queue<int> q;
	q.push(n);
	MAP[n] = 0;

	while (!q.empty()) {
		int now = q.front(); q.pop();
		int nexts[] = { now - 1, now + 1, now - 1 };
		for (int i = 0; i < 3; i++)
		{
			int next = nexts[i];
			if ( next < 0 || next > last) continue;
			if (MAP[next] != 0) continue;
			MAP[next] = MAP[now] + 1;
			if (next == k) return;
			q.push(next);
		}
	}
	int be = 0;
}

int main() {

	ios_base::sync_with_stdio(false);
	cout.tie();
	cin.tie();

	cin >> n >> k;
	if (n == k) {
		cout << 0;
		return 0;
	}
	else if (n > k) last = n+1;
	else last = min(k * 2 - n, 100000);
	
	bfs();

	cout << MAP[k];

	return 0;
}