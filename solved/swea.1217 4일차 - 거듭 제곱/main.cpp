/*
std::pow �Ἥ ¥�µ� 4��
��� ¥�µ� 5�� (0^0 �����ϴ���...)

std::pow�� 8ms, ��ʹ� 5ms...?
double ����̳� int ����̳� �����ε�. (�ƴϸ� �׳� ���� ��Ȳ ������ ����)
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
