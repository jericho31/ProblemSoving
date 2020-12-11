// 22min

#include <iostream>
#include <string>

using std::cin; using std::cout; using std::string;

string table[100] = {};

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int citer = 1; citer <= 10; ++citer)
	{
		int dummy;
		cin >> dummy;
		int ans = 1;
		for (int y = 0; y < 100; ++y) {
			cin >> table[y];
		}
		for (int i = 0; i < 100; ++i) {
			for (int pb = 0; pb <= 99 - ans; ++pb) {
				for (int pe = 100; pe > pb + ans; --pe) {
					for (int j = 0; j <= (pe - pb) / 2; ++j) {
						if (j == (pe - pb) / 2) {
							ans = pe - pb;
							break;
						}
						if (table[i][pb + j] != table[i][pe - 1 - j]) break;
					}
					for (int j = 0; j <= (pe - pb) / 2; ++j) {
						if (j == (pe - pb) / 2) {
							ans = pe - pb;
							break;
						}
						if (table[pb + j][i] != table[pe - 1 - j][i]) break;
					}
				}
			}
		}
		cout << '#' << citer << ' ' << ans << '\n';
	}
}
