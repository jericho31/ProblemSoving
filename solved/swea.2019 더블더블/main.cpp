#include <iostream>

using std::cin; using std::cout;

int main()
{
	int n;
	cin >> n;
	cout << "1 ";
	int a = 1;
	while (n >= 1) {
		a *= 2;
		cout << a << ' ';
		--n;
	}
}
