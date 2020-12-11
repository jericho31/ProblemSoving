/*
27min

1 2 3 4 5 1 2 3
4 5 1 2 3 4 5 1
2 3 4 5 1 2 3 4
5 1 2 3 4 5 1 2
3 4 5 1 2 3 4 5

15

*/

#include <iostream>

using std::cin; using std::cout;

int arr[8] = {};

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int citer = 1; citer <= 10; ++citer)
	{
		int dummy;
		cin >> dummy;
		int low = 0x7fffffff;
		for (int i = 0; i < 8; ++i) {
			cin >> arr[i];
			if (low > arr[i]) low = arr[i];
		}
		for (int i = 0; i < 8; ++i) {
			arr[i] -= (low - 1) / 15 * 15;
		}
		while (true) {
			int tmp = arr[0];
			for (int i = 1; i <= 5; ++i) {
				tmp = arr[0];
				for (int j = 1; j <= 7; ++j) {
					arr[j - 1] = arr[j];
				}
				if ((tmp -= i) < 0) tmp = 0;
				arr[7] = tmp;
				if (tmp == 0) break;
			}
			if (tmp == 0) break;
		}
		cout << '#' << citer;
		for (int i = 0; i < 8; ++i) {
			cout << ' ' << arr[i];
		}
		cout << '\n';
	}
}
