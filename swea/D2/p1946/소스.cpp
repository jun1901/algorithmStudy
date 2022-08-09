#include <iostream>
#include <string>
using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int T, n;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		string s = "", c;
		int l, tl = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> c >> l;
			for (int j = 0; j < l; j++, tl++)
			{
				if (tl % 10 == 0) s += "\n";
				s += c;
			}
		}
		cout << "#" << tc;
		cout << s << endl;
		
	}

	return 0;
}