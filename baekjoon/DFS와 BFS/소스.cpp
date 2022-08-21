#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, m, v;
vector<int> MAP[1001];
vector<bool> visited;

void setup() {
	cin >> n >> m >> v;
	visited.resize(n + 1);
	for (int i = 0; i < m; i++)
	{
		int from, to;
		cin >> from >> to;
		MAP[from].push_back(to);
		MAP[to].push_back(from);
	}

	for (int i = 1; i <= n; i++)
		sort(MAP[i].begin(), MAP[i].end());
}

void dfs(int now) {
	cout << now << " ";
	for (int i = 0; i < MAP[now].size(); i++) {
		int next = MAP[now][i];
		if (visited[next]) continue;
		visited[next] = 1;
		dfs(next);
	}
}

void bfs() {
	queue<int> q;
	q.push(v);
	visited[v] = 1;

	while (!q.empty()) {
		int now = q.front(); q.pop();
		cout << now << " ";

		for (int i = 0; i < MAP[now].size(); i++)
		{
			int next = MAP[now][i];
			if (visited[next]) continue;
			q.push(next);
			visited[next] = 1;
		}

	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cout.tie();
	cin.tie();

	setup();

	visited[v] = 1;
	dfs(v);
	cout << endl;
	visited.clear();
	visited.resize(n + 1);
	bfs();

	return 0;
}