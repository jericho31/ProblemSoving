#include <iostream>

using std::cin; using std::cout;

int table[10][10] = {};

void printSnail(int n)
{
	int x = -1, y = 0 , a = 0;
	int dir = 0, one = n;
	while (one > 0) {
		switch (dir)
		{
		case 0: {
			for (int i = 0; i < one; ++i) {
				table[y][++x] = ++a;
			}
			--one;
			++dir;
		} break;
		case 1: {
			for (int i = 0; i < one; ++i) {
				table[++y][x] = ++a;
			}
			++dir;
		} break;
		case 2: {
			for (int i = 0; i < one; ++i) {
				table[y][--x] = ++a;
			}
			--one;
			++dir;
		} break;
		case 3: {
			for (int i = 0; i < one; ++i) {
				table[--y][x] = ++a;
			}
			dir = 0;
		} break;
		}
	}
	for (int j = 0; j < n; ++j) {
		for (int i = 0; i < n; ++i) {
			cout << table[j][i] << ' ';
		}
		cout << '\n';
	}
}

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
		cout << '#' << citer << '\n';
		printSnail(n);
	}
}
