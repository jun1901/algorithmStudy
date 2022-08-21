#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
int a, b;
vector<int> p[101];
int cnt[101];

void setup() {
	cin >> n >> a >> b >> m;
	for (int i = 0; i < m; i++)
	{
		int from, to;
		cin >> from >> to;
		p[from].push_back(to);
		p[to].push_back(from);
	}
}

int bfs() {
	queue<int> q;
	q.push(a);

	while (!q.empty()) {
		int now = q.front(); q.pop();

		if (now == b) break;

		for (int i = 0; i < p[now].size(); i++)
		{
			int next = p[now][i];
			if (cnt[next] != 0 || next == a) continue;
			cnt[next] = cnt[now] + 1;
			q.push(next);
		}
	}

	return cnt[b] == 0 ? -1 : cnt[b];
}

int main() {

	ios_base::sync_with_stdio(false);
	cout.tie();
	cin.tie();

	setup();
	cout << bfs();

	return 0;
}