//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//using std::cin; using std::cout; using std::vector;
//
//class SQ
//{
//public:
//	int L, H, R;
//
//	SQ() : L(0), H(0), R(0) {}
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
//			if (vh[i] >= vh[i + 1]) break;
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
//				for (int i = m; i <= vh.size() - 2; ++i) {
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
//		return vh.back();
//	}
//};
//
//vector<SQ*> vsp;
//int N = 0;
//
//void printvsp()
//{
//	cout << '\n';
//	for (const auto& sq : vsp) {
//		cout << sq->L << ' ' << sq->H << ' ' << sq->R << '\n';
//	}
//	cout << '\n';
//}
//
//void printvi(const vector<int>& v)
//{
//	for (const auto& i : v) {
//		cout << i << ' ';
//	}
//}
//
//int main()
//{
//	cin >> N;
//	for (int i = 0; i < N; ++i) {
//		auto newone = new SQ;
//		vsp.push_back(newone);
//		cin >> newone->L >> newone->H >> newone->R;
//	}
//	//printvsp();  // check
//	std::sort(vsp.begin(), vsp.end(),
//		[](const SQ* a, const SQ* b)->bool {
//			if (a->L < b->L) return true;
//			if (a->L > b->L) return false;
//			if (a->H > b->H) return true;
//			if (a->H < b->H) return false;
//			return a->R > b->R;
//		});
//	//printvsp();  // check
//
//	vector<int> result;
//
//	while (true) {
//		// 끝점 이벤트 잡는게 문제... 이걸 합쳐서 이래놓는게 잘못이었다.
//	}
//
//	printvi(result);
//
//	return 0;
//}
