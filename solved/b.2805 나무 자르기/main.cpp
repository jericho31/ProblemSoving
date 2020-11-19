#include <iostream>
#define MAX(a, b) (((a) >= (b)) ? (a) : (b))

using std::cin; using std::cout;

int ans = 0;
int arr[1000000] = { 0, };
int n, m;
int low = 0, high = 0;

//void printarr()
//{
//	for (int i = 0; i < n; ++i) {
//		if (i % 5 == 0) cout << '\n';
//		cout << arr[i] << '\t';
//	}
//	cout << '\n';
//}

int main()
{
	std::ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		if (high < arr[i]) high = arr[i];
	}

	// high가 탐색범위에 포함되지 않는다.
	while (low < high) {
		int mid = (low + high) / 2;
		long long sum = 0;
		for (int i = 0; i < n; ++i) {
			sum += MAX(0, (long long)arr[i] - mid);
		}
		if (sum >= m) {
			ans = MAX(ans, mid);
			low = mid + 1;
		}
		else {
			high = mid;
		}
	}

	cout << ans << '\n';

	return 0;
}
