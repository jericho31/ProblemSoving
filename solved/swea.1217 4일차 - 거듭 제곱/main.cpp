/*
std::pow 써서 짜는데 4분
재귀 짜는데 5분 (0^0 생각하느라...)

std::pow는 8ms, 재귀는 5ms...?
double 계산이냐 int 계산이냐 차이인듯. (아니면 그냥 서버 상황 차이일 수도)
*/

#include <iostream>
//#include <cmath>

using std::cin; using std::cout;

int pow(int n, int m)
{
	if (m == 0) return 1;
	if (n == 0) return 0;
	if (n == 1) return 1;
	if (m == 1) return n;
	return pow(n, m - 1) * n;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int citer = 1; citer <= 10; ++citer)
	{
		int dummy;
		cin >> dummy;
		int n, m;
		cin >> n >> m;
		//cout << '#' << citer << ' ' << (int)std::pow(n, m) << '\n';
		cout << '#' << citer << ' ' << pow(n, m) << '\n';
	}
}
