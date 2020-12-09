#include <iostream>
#include <stdexcept>

using std::cin; using std::cout;

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int n;
		cin >> n;
		int a = 0, b = 0, c = 0, d = 0, e = 0;
		while (n > 1) {
			if (n % 2 == 0) {
				n /= 2;
				++a;
			}
			else if (n % 3 == 0) {
				n /= 3;
				++b;
			}
			else if (n % 5 == 0) {
				n /= 5;
				++c;
			}
			else if (n % 7 == 0) {
				n /= 7;
				++d;
			}
			else if (n % 11 == 0) {
				n /= 11;
				++e;
			}
			else {
				throw std::runtime_error("input doesn't match");
			}
		}
		cout << '#' << citer << ' ' << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << '\n';
	}
}
