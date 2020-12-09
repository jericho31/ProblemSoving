#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::string;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int n;
		cin >> n;
		std::vector<string> vs;
		for (int i = 0; i < n; ++i) {
			std::string str;
			cin >> str;
			vs.push_back(str);
		}
		std::sort(vs.begin(), vs.end(),
			[](const string& a, const string& b)->bool {
				if (a.size() < b.size()) return true;
				if (a.size() > b.size()) return false;
				return a < b;
			});
		cout << '#' << citer << '\n';
		cout << vs[0] << '\n';
		for (int i = 1; i < n; ++i) {
			if (vs[i - 1] == vs[i]) continue;
			cout << vs[i] << '\n';
		}
	}
}
