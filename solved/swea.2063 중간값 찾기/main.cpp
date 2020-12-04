#include <iostream>
#include <algorithm>
#include <vector>

using std::cin; using std::cout; using std::vector;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	std::sort(v.begin(), v.end());
	cout << v[n / 2] << '\n';
}
