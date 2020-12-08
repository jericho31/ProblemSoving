// DP 문제. 각 칼로리에서의 최대 점수 갱신해가는 것.
// 작은걸 보고 큰걸 갱신하는 거니까 뒤에서부터 순회해야 중복 안들어감.
// item 배열도 없애버리고 그냥 바로바로 받아서 해도 되겠다.

#include <iostream>
#include <cstring>

using std::cin; using std::cout;

int dp[10001] = { 0, };

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		std::memset(dp, 0, sizeof(dp));
		int n, l;
		cin >> n >> l;
		for (int i = 0; i < n; ++i) {
			int t, k;
			cin >> t >> k;
			for (int dpk = l; dpk >= k; --dpk) {
				if (dp[dpk] < dp[dpk - k] + t) {
					dp[dpk] = dp[dpk - k] + t;
				}
			}
		}
		cout << '#' << citer << ' ' << dp[l] << '\n';
	}
}
