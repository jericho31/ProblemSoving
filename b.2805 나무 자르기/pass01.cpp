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
//		////}  // �������ö� s == e �� ��Ȳ. �� �ڸ��� upper bound �ڸ�.
//		////memmove(arr + e + 1, arr + e, sizeof(int) * (i - e));
//		////arr[e] = cur;
//		//
//		//int* pos = std::upper_bound(arr, arr + i, cur);
//		//memmove(pos + 1, pos, (size_t)(arr + i) - (size_t)pos);
//		//*pos = cur;
//
//		// �������� ���Ѽ� �Ʒ��� �̺�Ž�� ������ �� ���� ���ϴ°ſ���
//		// ����Ž������ ������ ������ �ӵ����� �̵溸���� �ߴµ�
//		// �鸸�� �������� �ϴ°� �ξ� �����ɸ�����.
//		// �ϱ� ����Ž������ �������� ���귮 ��������� ���丷���� �ɰŰ�����..
//
//		cin >> arr[i];
//		if (high < arr[i]) high = arr[i];
//	}
//
//	//++high;  // �̰� ���ϸ� �ȵǴ�... �̶�� �����ߴµ� 10¥�� ������ 10���� �ڸ��� ���°� ������... ����
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
