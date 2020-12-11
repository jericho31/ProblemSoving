// 7min

#include <iostream>
#include <string>

using std::cin; using std::cout; using std::string;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int citer = 1; citer <= 10; ++citer)
	{
		int dummy;
		cin >> dummy;
		string f, s;
		cin >> f >> s;
		int ans = 0;
		for (int i = 0; i <= (int)s.size() - (int)f.size(); ++i) {
			if (s[i] == f[0]) {
				for (int j = 1; j <= (int)f.size(); ++j) {
					if (j == (int)f.size()) {
						++ans;
						break;
					}
					if (s[i + j] != f[j]) break;
				}
			}
		}
		cout << '#' << citer << ' ' << ans << '\n';
	}
}
