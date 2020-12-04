#include <iostream>
#include <cmath>

using std::cin; using std::cout;

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int s = 0;
		for (int i = 0; i < 10; ++i) {
			int tmp;
			cin >> tmp;
			s += tmp;
		}
		cout << '#' << citer << ' ' << std::round((double)s / 10) << '\n';
	}
}
