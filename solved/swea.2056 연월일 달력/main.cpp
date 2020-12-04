#include <iostream>

using std::cin; using std::cout;

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int n;
		cin >> n;
		int y = n / 10000, m = n / 100 % 100, d = n % 100;
		if (m < 1 || m > 12) goto FAIL;
		switch (m)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
			if (d < 1 || d > 31) goto FAIL;
		} break;
		case 4: case 6: case 9: case 11: {
			if (d < 1 || d > 30) goto FAIL;
		} break;
		case 2: {
			if (d < 1 || d > 28) goto FAIL;
		} break;
		}
		//cout << '#' << citer << ' ' << y << '/' << m << '/' << d << '\n';
		printf("#%d %04d/%02d/%02d\n", citer, y, m, d);

		continue;

	FAIL:
		cout << '#' << citer << ' ' << -1 << '\n';
	}
}
