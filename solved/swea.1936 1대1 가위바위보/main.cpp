#include <iostream>

using std::cin; using std::cout;

int main()
{
	int a, b;
	cin >> a >> b;
	int c = a - b;
	if (c < 0) c += 3;
	if (c == 1) {
		cout << 'A' << '\n';
	}
	else cout << 'B' << '\n';
}
