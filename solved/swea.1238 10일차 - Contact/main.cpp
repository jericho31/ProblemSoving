#include <iostream>
#include <vector>
#include <set>

using std::cin; using std::cout; using std::vector; using std::set;

class Node
{
public:
	int num = 0;
	set<Node*> to;
	bool on = false;

	void init(int n = 0)
	{
		num = n;
		to.clear();
		on = false;
	}
};

Node node[101] = {};  // 0 dummy

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int citer = 1; citer <= 10; ++citer)
	{
		int n, start;
		cin >> n >> start;
		for (int i = 1; i <= 100; ++i) {
			node[i].init(i);
		}
		for (int i = 0; i < n / 2; ++i) {
			int a, b;
			cin >> a >> b;
			node[a].to.insert(&node[b]);  // 중복 입력 제거됨
		}
		node[start].on = true;
		bool t = 0;
		vector<Node*> v[2];
		v[0].push_back(&node[start]);
		while (true) {
			for (int i = 0; i < (int)v[t].size(); ++i) {
				for (auto j : v[t][i]->to) {
					if (!j->on) {
						j->on = true;
						v[!t].push_back(j);
					}
				}
			}
			if (v[!t].empty()) {
				break;
			}
			v[t].clear();
			t = !t;
		}
		int ans = 0;
		for (auto i : v[t]) {
			if (ans < i->num) ans = i->num;
		}
		cout << '#' << citer << ' ' << ans << '\n';
	}
}
