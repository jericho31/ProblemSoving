#include <iostream>

using std::cin; using std::cout;

int table[16][16] = {};  // Å×µÎ¸®

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int n, k;
		cin >> n >> k;
		for (int y = 0; y < n; ++y) {
			for (int x = 0; x < n; ++x) {
				cin >> table[y][x];
			}
		}
		int ans = 0;
		for (int i = 0; i < n; ++i) {
			int cy = i, cx = i, ty = 0, tx = 0;
			for (int j = 0; j <= n; ++j) {
				if (table[j][cx] == 0) {
					if (tx == k) ++ans;
					tx = 0;
				}
				else {
					++tx;
				}

				if (table[cy][j] == 0) {
					if (ty == k) ++ans;
					ty = 0;
				}
				else {
					++ty;
				}
			}
		}
		cout << '#' << citer << ' ' << ans << '\n';
	}
}
