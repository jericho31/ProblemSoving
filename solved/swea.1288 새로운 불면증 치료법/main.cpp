#include <iostream>
#include <numeric>
#include <cstring>

using std::cin; using std::cout;

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		long long n;
		cin >> n;
		int count[10];
		std::memset(count, 0, sizeof(count));
		long long s = 0;
		while (true) {
			s += n;
			auto tmp = s;
			while (tmp > 0) {
				count[tmp % 10] = 1;
				tmp /= 10;
			}
			if (std::accumulate(count, count + 10, 0) == 10) break;
		}
		cout << '#' << citer << ' ' << s << '\n';
	}
}
