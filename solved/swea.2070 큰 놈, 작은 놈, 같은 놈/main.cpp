#include <iostream>

using std::cin; using std::cout;

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int a, b;
		cin >> a >> b;
		cout << '#' << citer << ' ';
		if (a > b) {
			cout << '>' << '\n';
		}
		else if (a < b) {
			cout << '<' << '\n';
		}
		else {
			cout << '=' << '\n';
		}
	}
}
