#include <iostream>
#include <vector>
using namespace std;

struct Node
{
	int y, x;
};

int n;
int lastNum;
vector<Node> index;
int MAP[1000][1000];
int dr[] = { -1,1,0,0 },
	dc[] = { 0,0,-1,1 };

void setup() {
	cin >> n;
	lastNum = pow(n, 2);
	index.resize(lastNum + 1);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cin >> MAP[i][j];
			index[MAP[i][j]] = { i,j };
		}
}

int boom() {
	int cnt = 0;
	for (int i = 1; i <= lastNum; i++)
	{
		if (index[i].y == -1) continue;
		cnt = i;
		for (int j = 0; j < 4; j++)
		{
			int nr = index[i].y + dr[j];
			int nc = index[i].x + dc[j];
			if (nr < 0 || nc < 0 || nr >= n || nc >= n) continue;
			int num = MAP[nr][nc];
			if (index[num].y == -1) continue;
			index[num].y = -1;
		}
		index[i].y = -1;
	}
	return cnt;
}

int main() {

	ios_base::sync_with_stdio(false);
	cout.tie();
	cin.tie();

	setup();
	cout << boom() <<"ÃÊ";

	return 0;
}