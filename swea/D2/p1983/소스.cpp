#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct person
{
	double score;
	int index;
};

bool comp(person be, person af) {
	return be.score > af.score;
}


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int T;
	string ranks[] = { "A+","A0","A-","B+","B0","B-","C+","C0","C-","D0" };
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int n, k;
		cin >> n >> k;
		vector<person> v(n);
		for (int i = 0; i < n; i++)
		{
			int middleScore, finalScore, taskScore;
			cin >> middleScore >> finalScore >> taskScore;
			v[i] = { middleScore * 0.35 + finalScore * 0.45 + taskScore * 0.2, i+1 };
		}
		sort(v.begin(), v.end(), comp);
		
		for (int i = 0; i < n; i++)
		{
			if (v[i].index != k) continue;
			int grade = i * 10 / n;
			cout << "#" << tc << " " << ranks[ grade ] << endl;
			break;
		}

	}

	return 0;
}