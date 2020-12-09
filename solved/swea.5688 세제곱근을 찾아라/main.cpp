#include <iostream>
#include <cmath>

using std::cin; using std::cout;

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		long long n;
		cin >> n;
		long double ldn = n;
		if (std::cbrt(ldn) == (long double)(long long)std::cbrt(ldn)) {
			cout << '#' << citer << ' ' << (long long)std::cbrt(ldn) << '\n';
		}
		else {
			cout << '#' << citer << ' ' << -1 << '\n';
		}
	}
}
