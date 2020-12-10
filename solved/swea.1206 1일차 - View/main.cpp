#include <iostream>
#include <algorithm>

using std::cin; using std::cout;

int arr[1000] = {};

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int citer = 1; citer <= 10; ++citer)
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i) {
			cin >> arr[i];
		}
		int ans = 0;
		for (int i = 2; i <= n - 3; ++i) {
			int tmp[4] = { arr[i - 2], arr[i - 1], arr[i + 1], arr[i + 2] };
			ans += std::max(0, arr[i] - *std::max_element(tmp, tmp + 4));
		}
		cout << '#' << citer << ' ' << ans << '\n';
	}
}
