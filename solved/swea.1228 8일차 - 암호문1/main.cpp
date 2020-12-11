/*
list 쓰면 삽입에 부하가 사라지긴 하는데
반복자 찾아가는게 귀찮네. arr[n] 식으로 접근이 안되니까.
이번 문제는 첫 10개만이라서 벡터로 해도 부담없긴 한데
커지면 어쩔 수 없이 리스트 써야할 듯.
하긴 10개로 예외처리 하고 하는 것보다 list 쓰는게 편하긴 하다.
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
		std::list<int> arr;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			arr.push_back(a);
		}
		cin >> n;
		for (int i = 0; i < n; ++i) {
			char dummy;
			cin >> dummy;
			int p, k;
			cin >> p >> k;
			auto cur = arr.begin();
			while (p--) {
				++cur;
			}
			for (int j = 0; j < k; ++j) {
				int tmp;
				cin >> tmp;
				arr.insert(cur, tmp);
			}
		}
		cout << '#' << citer;
		auto iter = arr.begin();
		for (int i = 0; i < 10; ++i) {
			cout << ' ' << *iter++;
		}
		cout << '\n';
	}
}
