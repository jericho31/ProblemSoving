// 12min

#include <iostream>

using std::cin; using std::cout;

int arr[100][100] = {};

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int citer = 1; citer <= 10; ++citer)
	{
		int dummy;
		cin >> dummy;
		int ans = -0x7fffffff;
		int sumx[102] = {};
		for (int y = 0; y < 100; ++y) {
			int sum = 0;
			for (int x = 0; x < 100; ++x) {
				cin >> arr[y][x];
				sum += arr[y][x];
				sumx[x] += arr[y][x];
				if (y == x) {
					sumx[100] += arr[y][x];
				}
				if (y == 99 - x) {
					sumx[101] += arr[y][x];
				}
			}
			if (ans < sum) ans = sum;
		}
		for (int i = 0; i < 102; ++i) {
			if (ans < sumx[i]) ans = sumx[i];
		}
		cout << '#' << citer << ' ' << ans << '\n';
	}
}
