#include <iostream>
#include <string>

using std::cin; using std::cout; using std::string;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		string s;
		cin >> s;
		char a = s[0];
		for (int i = 1; i <= 10; ++i) {
			if (s[i] == a) {
				bool fail = false;
				for (int j = 0; j <= 10; ++j) {
					if (s[j] != s[j + i]) {
						fail = true;
						break;
					}
				}
				if (!fail) {
					cout << '#' << citer << ' ' << i << '\n';
					break;
				}
			}
		}
	}
}
