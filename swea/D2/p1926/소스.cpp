#include <iostream>
#include <regex>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		string s = regex_replace(to_string(i), regex("[369]"), "-");
		if (s.find('-') != -1) s = regex_replace(s, regex("[0-9]"), "");
		cout << s << " ";
	}

	return 0;
}