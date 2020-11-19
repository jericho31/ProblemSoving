#include <iostream>
#include <deque>

using std::cin; using std::cout;

class DOC
{
public:
	int n, pri;

	DOC(int n, int pri) : n(n), pri(pri) {}
};

int main()
{
	int cases;
	cin >> cases;
	for (int iter = 0; iter < cases; ++iter)
	{
		int N, M;
		cin >> N >> M;

		std::deque<DOC> q;
		int cnt[10] = { 0, };
		int input;
		int ans = 1;
		for (int i = 0; i < N; ++i) {
			cin >> input;
			q.emplace_back(i, input);
			++cnt[input];
		}
		for (int i = 0; i < N; ++i) {
			int high = 1;
			for (int j = 9; j >= 1; --j) {
				if (cnt[j] != 0) {
					high = j;
					break;
				}
			}
			while (q.front().pri < high) {
				q.push_back(q.front());
				q.pop_front();
			}
			if (q.front().n == M) {
				break;
			}
			q.pop_front();
			--cnt[high];
			++ans;
		}
		cout << ans << '\n';
	}

	return 0;
}
