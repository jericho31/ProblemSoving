/*
8min
백지부터 짜서. (암호문1, 2 풀고)
*/

#include <iostream>
#include <list>

using std::cin; using std::cout;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int citer = 1; citer <= 10; ++citer)
	{
		int n;
		cin >> n;
		std::list<int> ll;
		while (n--) {
			int tmp;
			cin >> tmp;
			ll.push_back(tmp);
		}
		cin >> n;
		while (n--) {
			char c;
			cin >> c;
			switch (c)
			{
			case 'I': {
				int x, y;
				cin >> x >> y;
				auto iter = ll.begin();
				while (x--)++iter;
				while (y--) {
					int tmp;
					cin >> tmp;
					ll.insert(iter, tmp);
				}
			} break;
			case 'D': {
				int x, y;
				cin >> x >> y;
				auto iter = ll.begin();
				while (x--)++iter;
				while (y--) {
					ll.erase(iter++);
				}
			} break;
			case 'A': {
				int y;
				cin >> y;
				while (y--) {
					int tmp;
					cin >> tmp;
					ll.push_back(tmp);
				}
			} break;
			}
		}
		auto iter = ll.begin();
		cout << '#' << citer;
		for (int i = 0; i < 10; ++i) {
			cout << ' ' << *iter++;
		}
		cout << '\n';
	}
}
