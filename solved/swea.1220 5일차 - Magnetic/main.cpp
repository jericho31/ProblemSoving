// 10min

#include <iostream>

using std::cin; using std::cout;

int table[100][100] = {};

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int citer = 1; citer <= 10; ++citer)
	{
		int dummy;
		cin >> dummy;
		for (int y = 0; y < 100; ++y) {
			for (int x = 0; x < 100; ++x) {
				cin >> table[y][x];
			}
		}
		int ans = 0;
		for (int x = 0; x < 100; ++x) {
			bool on = false;
			for (int y = 0; y < 100; ++y) {
				if (table[y][x] == 1) {
					on = true;
				}
				else if (table[y][x] == 2) {
					if (on) {
						++ans;
						on = false;
					}
				}
			}
		}
		cout << '#' << citer << ' ' << ans << '\n';
	}
}
