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
		int v = 0, dist = 0;
		for (int i = 0; i < n; ++i) {
			int c, a;
			cin >> c;
			if (c == 0) {
				dist += v;
				continue;
			}
			cin >> a;
			if (c == 1) {
				v += a;
				dist += v;
			}
			else {  // c == 2
				v -= a;
				if (v < 0) v = 0;
				dist += v;
			}
		}
		cout << '#' << citer << ' ' << dist << '\n';
	}
}
