///*
//되긴 하는데 중복 없애게 set으로 바꾸고 종료조건도.
//*/
//
//#include <iostream>
//#include <vector>
//
//using std::cin; using std::cout; using std::vector;
//
//class Node
//{
//public:
//	int num = 0;
//	vector<Node*> to;
//	bool on = false;
//
//	void init(int n = 0)
//	{
//		num = n;
//		to.clear();
//		on = false;
//	}
//};
//
//Node node[101] = {};  // 0 dummy
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	for (int citer = 1; citer <= 10; ++citer)
//	{
//		int n, start;
//		cin >> n >> start;
//		for (int i = 1; i <= 100; ++i) {
//			node[i].init(i);
//		}
//		for (int i = 0; i < n / 2; ++i) {
//			int a, b;
//			cin >> a >> b;
//			node[a].to.push_back(&node[b]);
//		}
//		node[start].on = true;
//		bool t = 0;
//		vector<Node*> v[2];
//		v[0].push_back(&node[start]);
//		while (true) {
//			bool found = false;
//			for (int i = 0; i < (int)v[t].size(); ++i) {
//				for (int j = 0; j < (int)v[t][i]->to.size(); ++j) {
//					if (!v[t][i]->to[j]->on) {
//						found = true;
//						v[t][i]->to[j]->on = true;
//						v[!t].push_back(v[t][i]->to[j]);
//					}
//				}
//			}
//			if (!found) {
//				break;
//			}
//			v[t].clear();
//			t = !t;
//		}
//		int ans = 0;
//		for (auto i : v[t]) {
//			if (ans < i->num) ans = i->num;
//		}
//		cout << '#' << citer << ' ' << ans << '\n';
//	}
//}
