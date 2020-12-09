#include <iostream>

using std::cin; using std::cout;

int md[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int m1, d1, m2, d2;
		cin >> m1 >> d1 >> m2 >> d2;
		if (m1 == m2) {
			cout << '#' << citer << ' ' << 1 + d2 - d1 << '\n';
			continue;
		}
		int ans = 1;
		ans += md[m1] - d1;
		while (++m1 != m2) {
			ans += md[m1];
		}
		ans += d2;
		cout << '#' << citer << ' ' << ans << '\n';
	}
}
