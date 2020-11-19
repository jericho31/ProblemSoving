//#include <iostream>
//#include <string.h>
//#include <algorithm>
//#define MAX(a, b) (((a) >= (b)) ? (a) : (b))
//
//using std::cin; using std::cout;
//
//int ans;
//int arr[1000000] = { 0, };
//int n, m;
//int low = 0, high = 0;
//int highbackup;
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
//bool possible(long long height)
//{
//	long long len = 0;
//	//나무를 잘라본다
//	for (int i = 0; i < n; i++)
//		if (arr[i] - height > 0)
//			len += arr[i] - height;
//
//	//조건 충족
//	if (len >= m)
//		return true;
//	return false;
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
//		cin >> arr[i];
//		if (high < arr[i]) high = arr[i];
//	}
//	highbackup = high;
//
//	++high;
//	while (low < high) {
//		int mid = (low + high) / 2;
//		long long sum = 0;
//		for (int i = 0; i < n; ++i) {
//			sum += MAX(0, (long long)arr[i] - mid);
//		}
//		if (sum > m) {
//			low = mid + 1;
//		}
//		else {
//			high = mid;
//		}
//	}
//
//	cout << high << '\n';
//
//
//
//	low = 1;
//	high = highbackup;
//	long long result = 0;
//	while (low <= high)
//	{
//		long long mid = (low + high) / 2;
//		if (possible(mid))
//		{
//			result = MAX(result, mid);
//			low = mid + 1;
//		}
//		else
//			high = mid - 1;
//	}
//	cout << result << "\n";
//
//	return 0;
//}
