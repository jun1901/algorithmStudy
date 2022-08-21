#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct Node
{
	int y, x;
};

int n, m;
bool MAP[101][101];
int cnt[101][101];

void setup() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++)
			MAP[i][j + 1] = s[j] == '0' ? 0 : 1;
	}
}

int bfs() {
	int dr[] = { -1,1,0,0 },
		dc[] = { 0,0,-1,1 };

	queue<Node> q;
	q.push({ 1,1 });
	cnt[1][1] = 1;

	while (!q.empty()) {
		Node now = q.front(); q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nr = now.y + dr[i];
			int nc = now.x + dc[i];
			if (nr < 1 || nc < 1 || nr > n || nc > m) continue;
			if (!MAP[nr][nc] || cnt[nr][nc]) continue;
			cnt[nr][nc] = cnt[now.y][now.x] + 1;
			q.push({ nr,nc });
		}
	}

	return cnt[n][m];

}

int main() {

	ios_base::sync_with_stdio(false);
	cout.tie();
	cin.tie();

	setup();
	cout << bfs();

	return 0;
}