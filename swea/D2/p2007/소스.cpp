#include <iostream>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		string s;
		cin >> s;
		string Find(1,s[0]);
		int index = s.find(Find, 1);
		Find = s.substr(0, index);
		if (index != s.find(Find, 1)) {
			index = s.find(Find, 1);
			Find = s.substr(0, index);
		}
		
		cout << "#" << tc << " " << Find.length() << endl;
	}

	return 0;
}