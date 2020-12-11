/*
22min

�ݺ��� �����ϴµ� �ð� ���� �ɸ���...
list, set, map ���� ����� �ݺ��ڴ� �� �����ϰ� �� ���ۿ� ���f ��.
vector, deque ���� ���� ���� �ݺ��ڶ��� �ٸ���.
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
		std::list<char> ll;
		while (n--) {
			char c;
			cin >> c;
			ll.push_back(c);
		}
		auto iter = ll.begin();
		while (true) {
			auto past = iter++;
			if (iter == ll.end()) break;
			if (*past == *iter) {
				ll.erase(past);
				ll.erase(iter++);
				if (iter != ll.begin()) --iter;
			}
		}
		cout << '#' << citer << ' ';
		iter = ll.begin();
		while (iter != ll.end()) {
			cout << *iter++;
		}
		cout << '\n';
	}
}
