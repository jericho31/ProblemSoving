#include <iostream>
#include <cstring>

using std::cin; using std::cout;

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int tmp;
		cin >> tmp;
		int count[101];
		std::memset(count, 0, sizeof(count[0]) * 101);
		int mc = -1;
		int ms = -1;
		for (int i = 0; i < 1000; ++i) {
			int tmp;
			cin >> tmp;
			++count[tmp];
			if (count[tmp] > mc) {
				mc = count[tmp];
				ms = tmp;
			}
			else if (count[tmp] == mc && tmp > ms) {
				ms = tmp;
			}
		}
		cout << '#' << citer << ' ' << ms << '\n';
	}
}
