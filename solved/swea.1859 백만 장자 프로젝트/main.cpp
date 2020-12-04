#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::vector;

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int n;
		cin >> n;
		vector<long long> v;
		for (int i = 0; i < n; ++i) {
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
		long long s = 0;
		long long high = -1;
		for (int i = (int)v.size() - 1; i >= 0; --i) {
			if (v[i] > high) {
				high = v[i];
			}
			else {
				s += high - v[i];
			}
		}
		cout << '#' << citer << ' ' << s << '\n';
	}
}
