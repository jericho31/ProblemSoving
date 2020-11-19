//#include <iostream>
//#include <string.h>
//#include <algorithm>
//#define MAX(a, b) (((a) >= (b)) ? (a) : (b))
//
//using std::cin; using std::cout;
//
//int ans = 0;
//int arr[1000000] = { 0, };
//int n, m;
//int low = 0, high = 0;
//
//void printarr()
//{
//	for (int i = 0; i < n; ++i) {
//		if (i % 5 == 0) cout << '\n';
//		cout << arr[i] << '\t';
//	}
//	cout << '\n';
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin >> n >> m;
//	if (n < 1) return 1;
//	for (int i = 0; i < n; ++i) {
//		//int cur;
//		//cin >> cur;
//		////// binary search upper bound
//		////int s = 0, e = i, m;
//		////while (s < e) {
//		////	m = (s + e) / 2;
//		////	if (cur >= arr[m]) s = m + 1;
//		////	else e = m;
//		////}  // 빠져나올땐 s == e 인 상황. 그 자리가 upper bound 자리.
//		////memmove(arr + e + 1, arr + e, sizeof(int) * (i - e));
//		////arr[e] = cur;
//		//
//		//int* pos = std::upper_bound(arr, arr + i, cur);
//		//memmove(pos + 1, pos, (size_t)(arr + i) - (size_t)pos);
//		//*pos = cur;
//
//		// 삽입정렬 시켜서 아래에 이분탐색 실행할 때 길이 합하는거에서
//		// 이진탐색으로 시작점 좁혀서 속도에서 이득보려고 했는데
//		// 백만개 삽입정렬 하는게 훨씬 오래걸리나봄.
//		// 하긴 이진탐색으로 좁혀봤자 연산량 평균적으로 반토막정도 될거같으니..
//
//		cin >> arr[i];
//		if (high < arr[i]) high = arr[i];
//	}
//
//	//++high;  // 이거 안하면 안되는... 이라고 생각했는데 10짜리 나무는 10으로 자르면 남는게 없구나... ㅇㅋ
//	while (low < high) {
//		int mid = (low + high) / 2;
//		long long sum = 0;
//		for (int i = 0; i < n; ++i) {
//			sum += MAX(0, (long long)arr[i] - mid);
//		}
//		if (sum >= m) {
//			ans = MAX(ans, mid);
//			low = mid + 1;
//		}
//		else {
//			high = mid;
//		}
//	}
//
//	cout << ans << '\n';
//
//	return 0;
//}
