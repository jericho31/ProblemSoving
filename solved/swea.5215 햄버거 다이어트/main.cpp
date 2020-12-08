// DP ����. �� Į�θ������� �ִ� ���� �����ذ��� ��.
// ������ ���� ū�� �����ϴ� �Ŵϱ� �ڿ������� ��ȸ�ؾ� �ߺ� �ȵ�.
// item �迭�� ���ֹ����� �׳� �ٷιٷ� �޾Ƽ� �ص� �ǰڴ�.

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
