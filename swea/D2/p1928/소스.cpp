#include <iostream>
#include <vector>
#include <bitset>
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
		string s, result = "", bn = "";
		vector<int> v;
		cin >> s;
		int l = s.length();
		/*for (int i = 0; i < l; i++)
		{
			bitset<6> b(s[i] - 'A');
			bn += b.to_string();

		}
		for (int j = 0; j < bn.length(); j+=8)
		{
			string change = bn.substr(j, 8);
			int num = 0;
			for (int k = 0; k < 8; k++)
			{
				num += pow(2, 7 - k)*(change[k]-'0');
			}
			result += num + 'A';
			cout << char(num + 'A') << " ";
		}*/
		//cout << result << endl;

	}

	return 0;
}