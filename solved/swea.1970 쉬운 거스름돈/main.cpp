#include <iostream>

using std::cin; using std::cout;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int n;
		cin >> n;
		cout << '#' << citer << '\n';
		cout << n / 50000 << ' ';
		n %= 50000;
		cout << n / 10000 << ' ';
		n %= 10000;
		cout << n / 5000 << ' ';
		n %= 5000;
		cout << n / 1000 << ' ';
		n %= 1000;
		cout << n / 500 << ' ';
		n %= 500;
		cout << n / 100 << ' ';
		n %= 100;
		cout << n / 50 << ' ';
		n %= 50;
		cout << n / 10 << '\n';
	}
}
