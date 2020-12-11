// 22min

#include <iostream>
#include <string>

using std::cin; using std::cout; using std::string;

string table[8] = {};

bool isPalindrome(string s)
{
	int a = 0, b = (int)s.size() - 1;
	for (int i = 0; i < (int)s.size() / 2; ++i) {
		if (s[a + i] != s[b - i]) return false;
	}
	return true;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int citer = 1; citer <= 10; ++citer)
	{
		int n;
		cin >> n;
		if (n == 1) {
			cout << '#' << citer << "64\n";
			continue;
		}
		int ans = 0;
		for (int i = 0; i < 8; ++i) {
			cin >> table[i];
		}
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j <= 8 - n; ++j) {
				string tmp = "", tmp2 = "";
				for (int k = 0; k < n; ++k) {
					tmp += table[i][j + k];
					tmp2 += table[j + k][i];
				}
				if (isPalindrome(tmp)) ++ans;
				if (isPalindrome(tmp2)) ++ans;
			}
		}
		cout << '#' << citer << ' ' << ans << '\n';
	}
}
