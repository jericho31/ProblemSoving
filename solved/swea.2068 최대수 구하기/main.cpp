#include <iostream>

using std::cin; using std::cout;

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int m = 0;
		for (int i = 0; i < 10; ++i) {
			int tmp;
			cin >> tmp;
			if (tmp > m) m = tmp;
		}
		cout << '#' << citer << ' ' << m << '\n';
	}
}
