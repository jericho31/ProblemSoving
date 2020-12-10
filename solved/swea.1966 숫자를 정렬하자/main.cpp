#include <iostream>
#include <algorithm>

using std::cin; using std::cout;

int arr[50] = {};

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
		for (int i = 0; i < n; ++i) {
			cin >> arr[i];
		}
		std::sort(arr, arr + n);
		cout << '#' << citer << ' ';
		for (int i = 0; i < n; ++i) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
	}
}
