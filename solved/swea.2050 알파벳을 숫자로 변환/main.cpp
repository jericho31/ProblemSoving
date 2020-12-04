#include <iostream>
#include <string>

using std::cin; using std::cout; using std::string;

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < (int)s.size(); ++i) {
		cout << s[i] - 'A' + 1 << ' ';
	}
}
