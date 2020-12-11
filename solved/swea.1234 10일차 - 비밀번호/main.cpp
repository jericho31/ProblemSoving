/*
22min

반복자 생각하는데 시간 오래 걸린다...
list, set, map 같은 양방향 반복자는 좀 불편하게 쓸 수밖에 없늗 듯.
vector, deque 같은 임의 접근 반복자랑은 다르다.
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
