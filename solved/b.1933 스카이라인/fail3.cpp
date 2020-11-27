//// 시간초과
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//using std::cin; using std::cout; using std::vector;
//
//class EP  // Event Point
//{
//public:
//	int x, h;
//
//	EP() : x(0), h(0) {}
//};
//
//class HIGH
//{
//public:
//	vector<int> vh;
//
//	void push(int a)
//	{
//		vh.push_back(a);
//		for (int i = vh.size() - 2; i >= 0; --i) {
//			if (vh[i] <= vh[i + 1]) break;
//			vh[i + 1] = vh[i];
//			vh[i] = a;
//		}
//	}
//	int pop(int a)
//	{
//		if (vh.empty()) return -1;
//		// binary search
//		int s = 0, e = vh.size();
//		while (true) {
//			if (s >= e) break;
//			int m = (s + e) / 2;
//			if (vh[m] == a) {
//				for (int i = m; i <= (int)vh.size() - 2; ++i) {
//					vh[i] = vh[i + 1];
//				}
//				vh.pop_back();
//				return 0;
//			}
//			else if (vh[m] > a) {
//				e = m;
//			}
//			else {  // vh[m] < a
//				s = m;
//			}
//		}
//		return -2;
//	}
//	int back()
//	{
//		if (vh.empty()) return -1;
//		return vh.back();
//	}
//};
//
//vector<EP*> vep;
//int N = 0;
//
//void printvep()
//{
//	cout << '\n';
//	for (const auto& ep : vep) {
//		cout << ep->x << ' ' << ep->h << '\n';
//	}
//	cout << '\n';
//}
//
//void printvi(const vector<int>& v)
//{
//	for (const auto& i : v) {
//		cout << i << ' ';
//	}
//	cout << '\n';
//}
//
//int main()
//{
//	cin >> N;
//	for (int i = 0; i < N; ++i) {
//		int l, h, r;
//		cin >> l >> h >> r;
//		auto ep1 = new EP;
//		vep.push_back(ep1);
//		auto ep2 = new EP;
//		vep.push_back(ep2);
//		ep1->x = l;
//		ep1->h = h;
//		ep2->x = r;
//		ep2->h = -h;
//	}
//	//printvep();  // check
//	std::sort(vep.begin(), vep.end(),
//		[](const EP* a, const EP* b)->bool {
//			if (a->x < b->x) return true;
//			if (a->x > b->x) return false;
//			return a->h > b->h;
//		});
//	//printvep();  // check
//
//	vector<int> result;
//	HIGH high;
//	high.push(0);
//	int curh = 0;
//	for (int i = 0; i < (int)vep.size(); ++i) {
//		if (vep[i]->h > 0) {
//			high.push(vep[i]->h);
//			//cout << "push " << vep[i]->h << '\n';  // check
//			//printvi(high.vh);  // check
//		}
//		else {
//			high.pop(-vep[i]->h);
//			//cout << "pop " << -vep[i]->h << '\n';  // check
//			//printvi(high.vh);  // check
//		}
//
//		if (i + 1 < (int)vep.size()) {
//			if (vep[i]->x != vep[i + 1]->x) {
//				if (curh != high.back()) {
//					result.push_back(vep[i]->x);
//					result.push_back(high.back());
//					curh = high.back();
//				}
//			}
//		}
//		else {  // vep 마지막
//			result.push_back(vep[i]->x);
//			result.push_back(0);
//		}
//	}
//
//	printvi(result);
//
//	return 0;
//}
