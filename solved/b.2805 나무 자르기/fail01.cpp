///*
//�ð� �ʰ�
//����Ž�� ��� �ϴ°� �����ǰ�
//*/
//
//#include <iostream>
//#include <string.h>
//#include <algorithm>
//
//using std::cin; using std::cout;
//
//int ans;
//int arr[1000000] = { 0, };
//int n, m;
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
//		int cur;
//		cin >> cur;
//		//// binary search upper bound
//		//int s = 0, e = i, m;
//		//while (s < e) {
//		//	m = (s + e) / 2;
//		//	if (cur >= arr[m]) s = m + 1;
//		//	else e = m;
//		//}  // �������ö� s == e �� ��Ȳ. �� �ڸ��� upper bound �ڸ�.
//		//memmove(arr + e + 1, arr + e, sizeof(int) * (i - e));
//		//arr[e] = cur;
//
//		int* pos = std::upper_bound(arr, arr + i, cur);
//		memmove(pos + 1, pos, (size_t)(arr + i) - (size_t)pos);
//		*pos = cur;
//	}
//
//	int low = 0, high = arr[n - 1], mid;
//	while (low < high) {
//		mid = (low + high) / 2;
//		long long sum = 0;
//		for (int* pos = std::upper_bound(arr, arr + n, mid); pos < arr + n; ++pos) {
//			sum += (long long)*pos - mid;
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
//	return 0;
//}
