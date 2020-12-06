#include <iostream>

using std::cin; using std::cout;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	
	for (int i = 1; i <= n; ++i) {
		int cnt = 0;
		int tmp = i;
		while (tmp > 0) {
			if (tmp % 10 != 0 && tmp % 10 % 3 == 0) ++cnt;
			tmp /= 10;
		}
		if (cnt > 0) {
			for (int j = 0; j < cnt; ++j) {
				cout << '-';
			}
		}
		else {
			cout << i;
		}
		cout << ' ';
	}
}
