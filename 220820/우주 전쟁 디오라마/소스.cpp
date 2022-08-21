#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct itemInfo
{
	int k, x;
	int sk, sp;
	int bk, bp;
};

struct buy
{
	int price, cnt;
};

int n, m;
vector<itemInfo> need;

void setup() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int k, x, sk, sp, bk, bp;
		cin >> k >> x >> sk >> sp >> bk >> bp;
		need.push_back({ k,x,sk,sp,bk,bp });
	}
}

int calcost(itemInfo now, int made) {
	int needItemCnt = made * now.k - now.x;
	if (ceil(needItemCnt * 1.0 / now.sk) * now.sp < ceil(needItemCnt * 1.0 / now.bk) * now.bp) 
		return ceil(needItemCnt * 1.0 / now.sk) * now.sp;
	
	int bCnt = needItemCnt/now.bk;
	int restCnt = needItemCnt - bCnt*now.bk;
	int sCost = ceil(restCnt * 1.0 / now.sk) * now.sp;
	int bCost = ceil(restCnt * 1.0 / now.bk) * now.bp;
	return bCnt * now.bp + (sCost < bCost ? sCost : bCost);
}

int findCnt() {
	int MIN = 0, MAX = 100;
	while (MIN <= MAX) {
		int mid = (MIN + MAX) / 2;
		int cost = 0;
		for (int i = 0; i < n; i++)
			cost += calcost(need[i], mid);
		
		if (cost < m) MIN = mid + 1;
		else MAX = mid - 1;
	}
	return MAX;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	setup();
	cout << findCnt();

	return 0;
}