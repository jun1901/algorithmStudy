#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> MAP;
vector<int> aptCnt;
int n, cnt = 0, num = 0;
int group[25][25];
int dr[] = { -1,1,0,0 },
	dc[] = { 0,0,-1,1 };

void bfs(int y, int x) {
	for (int i = 0; i < 4; i++)
	{
		int nr = y + dr[i];
		int nc = x + dc[i];
		if (nr < 0 || nc < 0 || nr >= n || nc >= n) continue;
		if (MAP[nr][nc] == '0' || group[nr][nc] != 0) continue;
		num++;
		group[nr][nc] = cnt;
		bfs(nr, nc);
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cout.tie();
	cin.tie();

	cin >> n;
	MAP.resize(n);
	for (int i = 0; i < n; i++) cin >> MAP[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (group[i][j] != 0 || MAP[i][j] == '0') continue;
			group[i][j] = ++cnt;
			num = 1;
			bfs(i, j);
			aptCnt.push_back(num);
		}
	}

	sort(aptCnt.begin(), aptCnt.end());

	cout << cnt << endl;
	for (int ac : aptCnt) cout << ac << endl;


	return 0;
}