#include <iostream>
#include <cmath>

using std::cin; using std::cout;

void printng()
{
	cout << "impossible\n";
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
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		cout << '#' << citer << ' ';
		if (std::abs(b - c) >= 2) {
			printng();
			continue;
		}
		if (b == 0 && c == 0 && a != 0 && d != 0) {
			printng();
			continue;
		}

		if (b == 0 && c == 0) {
			if (a != 0 && d != 0) {
				printng();
				continue;
			}
			if (a) {
				cout << '0';
				while (--a >= 0) {
					cout << '0';
				}
				cout << '\n';
				continue;
			}
			if (d) {
				cout << '1';
				while (--d >= 0) {
					cout << '1';
				}
				cout << '\n';
				continue;
			}
		}

		if (b >= c) {
			cout << '0';
			while (--a >= 0) {
				cout << '0';
			}
			--b;
			cout << '1';
			while (--d >= 0) {
				cout << '1';
			}
			bool last = 1;
			while (true) {
				if (last) {
					if (--c < 0) break;
					cout << '0';
					last = 0;
				}
				else {
					if (--b < 0) break;
					cout << '1';
					last = 1;
				}
			}
			cout << '\n';
		}
		else {  // b < c
			cout << '1';
			while (--d >= 0) {
				cout << '1';
			}
			--c;
			cout << '0';
			while (--a >= 0) {
				cout << '0';
			}
			bool last = 0;
			while (true) {
				if (last) {
					if (--c < 0) break;
					cout << '0';
					last = 0;
				}
				else {
					if (--b < 0) break;
					cout << '1';
					last = 1;
				}
			}
			cout << '\n';
		}
	}
}
