#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node
{
	int to, dist;
};

int n, a, b;
int result = 2e9;
int sum = 0;
vector<Node> MAP[100001];
priority_queue<int> MAX;
bool visited[100001];

void setup() {
	cin >> n >> a >> b;
	for (int i = 1; i < n; i++)
	{
		int from, to, dist;
		cin >> from >> to >> dist;
		MAP[from].push_back({ to,dist });
		MAP[to].push_back({ from,dist });
	}
}

void dfs(int now) {
	if (now == b) {
		result = min(result, sum - MAX.top());
		return;
	}
	for (int i = 0; i < MAP[now].size(); i++)
	{
		int next = MAP[now][i].to;
		if (visited[next]) continue;
		int dist = MAP[now][i].dist;
		visited[next] = 1;
		sum += dist;
		MAX.push(dist);
		dfs(next);
		if (MAX.top() == dist) MAX.pop();
		sum -= dist;
		visited[next] = 0;
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cout.tie();
	cin.tie();

	setup();
	visited[a] = 1;
	if (a == b) result = 0;
	else dfs(a);
	cout << result;

	return 0;
}