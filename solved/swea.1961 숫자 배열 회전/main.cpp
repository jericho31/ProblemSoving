#include <iostream>

using std::cin; using std::cout;

int table[7][7] = {};

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int n;
		cin >> n;
		for (int y = 0; y < n; ++y) {
			for (int x = 0; x < n; ++x) {
				cin >> table[y][x];
			}
		}
		cout << '#' << citer << '\n';
		int cy, cx;
		for (int i = 0; i < n; ++i) {
			cy = n; cx = i;
			for (int j = 0; j < n; ++j) {
				cout << table[--cy][cx];
			}
			cout << ' ';
			cy = n - 1 - i; cx = n;
			for (int j = 0; j < n; ++j) {
				cout << table[cy][--cx];
			}
			cout << ' ';
			cy = -1; cx = n - 1 - i;
			for (int j = 0; j < n; ++j) {
				cout << table[++cy][cx];
			}
			cout << '\n';
		}
	}
}
