#include <iostream>
#include <queue>
using namespace std;

struct Node
{
	int z, y, x;
};

int m, n, h, restCnt = 0, result = 0;
int MAP[100][100][100];
int cnt[100][100][100];
int dz[] = { 1,-1,0,0,0,0 },
	dy[] = { 0,0,1,-1,0,0 },
	dx[] = { 0,0,0,0,1,-1 };
queue<Node> q;

void setup() {
	cin >> m >> n >> h;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < m; k++)
			{
				cin >> MAP[i][j][k];
				switch (MAP[i][j][k])
				{
					case 0: restCnt++; break;
					case 1: q.push({ i,j,k }); break;
				}
			}
}

void bfs() {
	while (!q.empty()) {
		Node now = q.front(); q.pop();

		for (int i = 0; i < 6; i++)
		{
			int nz = now.z + dz[i];
			int ny = now.y + dy[i];
			int nx = now.x + dx[i];
			if (nz < 0 || ny < 0 || nx < 0 || nz >= h || ny >= n || nx >= m) continue;
			if (MAP[nz][ny][nx] != 0) continue;
			cnt[nz][ny][nx] = cnt[now.z][now.y][now.x] + 1;
			result = max(result, cnt[nz][ny][nx]);
			MAP[nz][ny][nx] = 1;
			restCnt--;
			q.push({ nz,ny,nx });
		}
	}
	if (restCnt > 0) result = -1;
}

int main() {

	ios_base::sync_with_stdio(false);
	cout.tie();
	cin.tie();

	setup();
	bfs();
	cout << result;

	return 0;
}