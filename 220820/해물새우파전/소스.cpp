#include <iostream>
#include <string>
#include <queue>
using namespace std;

string MAP[7];
int cnt[] = { 0,4,5 };
int dr[] = { -1,1,0,0 },
	dc[] = { 0,0,-1,1 };

bool bfs(int y, int x) {
	int dist[7][7] = { 0 };
	int num = cnt[(MAP[y][x] - '0')];
	queue<pair<int, int>> q;
	q.push({ y,x });
	dist[y][x] = 1;

	while (!q.empty()) {
		pair<int, int> now = q.front(); q.pop();
		if (dist[now.first][now.second] >= num) return true;

		for (int i = 0; i < 4; i++)
		{
			int nr = now.first + dr[i];
			int nc = now.second + dc[i];
			if (nr < 0 || nc < 0 || nr >= 7 || nc >= 7) continue;
			if (dist[nr][nc] > 0) continue;
			dist[nr][nc] = dist[now.first][now.second] + 1;
			if (MAP[nr][nc] == MAP[y][x] && dist[nr][nc] < num) return false;
			q.push({ nr,nc });
		}
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cout.tie();
	cin.tie();

	for (int i = 0; i < 7; i++) cin >> MAP[i];

	bool sw = true;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (MAP[i][j] == '0') continue;
			sw = bfs(i, j);
			if (!sw) break;
		}
		if (!sw) break;
	}

	cout << (sw ? "pass" : "fail");

	return 0;
}