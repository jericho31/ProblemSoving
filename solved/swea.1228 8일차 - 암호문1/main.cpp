/*
list ���� ���Կ� ���ϰ� ������� �ϴµ�
�ݺ��� ã�ư��°� ������. arr[n] ������ ������ �ȵǴϱ�.
�̹� ������ ù 10�����̶� ���ͷ� �ص� �δ���� �ѵ�
Ŀ���� ��¿ �� ���� ����Ʈ ����� ��.
�ϱ� 10���� ����ó�� �ϰ� �ϴ� �ͺ��� list ���°� ���ϱ� �ϴ�.
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
