#include <iostream>
#include <cmath>

using std::cin; using std::cout;

typedef std::pair<int, int> pii;
pii operator+(const pii &p1, const pii &p2)
{
	return pii(p1.first + p2.first, p1.second + p2.second);
}

pii vtop(int i)
{
	int r = (int)std::sqrt(i * 2);
	while (i <= r* (r + 1) / 2) {
		--r;
	}
	int a = i - r * (r + 1) / 2;
	return pii(a, r + 2 - a);
}

int ptov(const pii& p)
{
	int n = p.first + p.second - 2;
	return n * (n + 1) / 2 + p.first;
}

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int p, q;
		cin >> p >> q;
		cout << '#' << citer << ' ' << ptov(vtop(p) + vtop(q)) << '\n';
	}
}
