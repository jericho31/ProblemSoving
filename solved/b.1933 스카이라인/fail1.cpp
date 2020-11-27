//#include <iostream>
//#include <vector>
//#include <algorithm>
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
//	int h = 0, y = 0, nh = 0, ny = 0, cur = 0;
//
//	while (true) {
//		int cl = vsp[cur]->L, ch = vsp[cur]->H, cr = vsp[cur]->R;
//		if (h == 0) {
//			result.push_back(cl);
//			result.push_back(ch);
//			h = ch;
//			y = cr;
//		}
//		else {  // h != 0
//			if (cl > y) {
//				if (nh == 0) {
//					result.push_back(y);
//					result.push_back(0);
//					h = 0;
//					y = 0;
//					continue;
//				}
//				else {  // nh != 0
//					result.push_back(y);
//					result.push_back(nh);
//					h = nh;
//					y = ny;
//					nh = 0;
//					ny = 0;
//					continue;
//				}
//			}
//			else if (cl < y) {
//				if (ch < h) {
//					if (cr <= y) {
//						// do nothing
//					}
//					else {  // cr > y
//						if (ch < nh || cr > ny) {
//							// wtf...
//						}
//						else if (ch > nh) {
//
//						}
//						else {  // ch == nh
//
//						}
//					}
//				}
//				else if (ch > h) {
//
//				}
//				else {  // ch == h
//					if (cr <= y) {
//						// do nothing
//					}
//					else {  // cr > y
//
//					}
//				}
//			}
//			else {  // cl == y
//
//			}
//		}
//
//		++cur;
//		if (cur == N) {
//			if (nh == 0) {
//				result.push_back(y);
//				result.push_back(0);
//			}
//			else {
//				result.push_back(y);
//				result.push_back(nh);
//				result.push_back(ny);
//				result.push_back(0);
//			}
//			break;
//		}
//	}
//
//	printvi(result);
//
//	return 0;
//}
