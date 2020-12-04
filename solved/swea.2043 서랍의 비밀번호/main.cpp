#include <iostream>

using std::cin; using std::cout;

int main()
{
	int a, b;
	cin >> a >> b;
	int c = a - b;
	if (c < 0) c += 1000;
	++c;
	cout << c << '\n';
}
