#include <iostream>
#include <algorithm>

using std::cin; using std::cout;

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int p, q, r, s, w;
		cin >> p >> q >> r >> s >> w;
		int a = p * w;
		int b = q;
		b += std::max(w - r, 0) * s;
		cout << '#' << citer << ' ' << std::min(a, b) << '\n';
	}
}
