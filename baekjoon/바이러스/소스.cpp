#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<int> v[101];
bool visited[101];

void setup() {
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int from, to;
		cin >> from >> to;
		v[from].push_back(to);
		v[to].push_back(from);
	}
}

int bfs() {
	int cnt = 0;
	queue<int> q;
	q.push(1);
	visited[1] = 1;

	while (!q.empty()) {
		int now = q.front(); q.pop();

		for (int i = 0; i < v[now].size(); i++)
		{
			int next = v[now][i];
			if (visited[next]) continue;
			cnt++;
			visited[next] = 1;
			q.push(next);
		}
	}

	return cnt;
}

int main() {

	ios_base::sync_with_stdio(false);
	cout.tie();
	cin.tie();

	setup();
	cout << bfs();

	return 0;
}