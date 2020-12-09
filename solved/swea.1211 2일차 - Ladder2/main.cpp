/*
문제 설명 틀림 개같... 댓글 봐야 앎.
input도 복사해도 제대로 안들어가는데 이건 뭐가 문젠지.
그냥 2차원 노가다 문제.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using std::cin; using std::cout; using std::vector;

typedef std::pair<int, int> pii;

int table[100][100] = {};

int getDistance(int x)
{
	int cx = x, cy = 0;
	int dist = 0;

	while (true) {
		if (cy == 99) return dist;

		if (cx - 1 >= 0 && table[cy][cx - 1]) {
			while (cx - 1 >= 0 && table[cy][cx - 1]) {
				--cx;
				++dist;
			}
			++cy;
			++dist;
		}
		else if (cx + 1 < 100 && table[cy][cx + 1]) {
			while (cx + 1 < 100 && table[cy][cx + 1]) {
				++cx;
				++dist;
			}
			++cy;
			++dist;
		}
		else {
			++cy;
			++dist;
		}
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int citer = 1; citer <= 10; ++citer)
	{
		int dummy;
		cin >> dummy;
		int n;
		for (int y = 0; y < 100; ++y) {
			for (int x = 0; x < 100; ++x) {
				cin >> n;
				table[y][x] = n;
			}
		}
		vector<pii> v;
		for (int x = 0; x < 100; ++x) {
			if (table[0][x]) {
				v.emplace_back(x, getDistance(x));
			}
		}
		std::sort(v.begin(), v.end(),
			[](const pii& a, const pii& b)->bool {
				if (a.second < b.second) return true;
				if (a.second > b.second) return false;
				return a.first > b.first;
			});
		cout << '#' << citer << ' ' << v[0].first << '\n';
	}
}
