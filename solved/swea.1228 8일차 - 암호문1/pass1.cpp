///*
//27min
//
//그냥 배열로 하는데 list 같은거로 개선 예정
//*/
//
//#include <iostream>
//
//using std::cin; using std::cout;
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	for (int citer = 1; citer <= 10; ++citer)
//	{
//		int n;
//		cin >> n;
//		int arr[10] = {};
//		for (int i = 0; i < n; ++i) {
//			if (i < 10) {
//				cin >> arr[i];
//			}
//			else {
//				int dummy;
//				cin >> dummy;
//			}
//		}
//		cin >> n;
//		for (int i = 0; i < n; ++i) {
//			char dummy;
//			cin >> dummy;
//			int p, k;
//			cin >> p >> k;
//			for (int j = 9; j >= p + k; --j) {
//				arr[j] = arr[j - k];
//			}
//			for (int j = p; j < p + k; ++j) {
//				if (j >= 10) {
//					int dummy;
//					cin >> dummy;
//					continue;
//				}
//				cin >> arr[j];
//			}
//		}
//		cout << '#' << citer;
//		for (int i = 0; i < 10; ++i) {
//			cout << ' ' << arr[i];
//		}
//		cout << '\n';
//	}
//}
