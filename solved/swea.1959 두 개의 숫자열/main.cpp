#include <iostream>

using std::cin; using std::cout;

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int n, m;
		cin >> n >> m;
		int arr[2][20] = {};
		if (n <= m) {
			for (int i = 0; i < n; ++i) {
				cin >> arr[0][i];
			}
			for (int i = 0; i < m; ++i) {
				cin >> arr[1][i];
			}
		}
		else {  // n > m
			for (int i = 0; i < n; ++i) {
				cin >> arr[1][i];
			}
			for (int i = 0; i < m; ++i) {
				cin >> arr[0][i];
			}
			int tmp = n;
			n = m;
			m = tmp;
		}
		int ans = -0x7fffffff;
		for (int i = 0; i <= m - n; ++i) {
			int result = 0;
			for (int j = 0; j < n; ++j) {
				result += arr[0][j] * arr[1][i + j];
			}
			if (ans < result) {
				ans = result;
			}
		}
		cout << '#' << citer << ' ' << ans << '\n';
	}
}
