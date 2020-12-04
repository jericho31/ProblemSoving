#include <iostream>
#include <string>

using std::cin; using std::cout; using std::string;

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < (int)s.size(); ++i) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] += 'A' - 'a';
		}
	}
	cout << s;
}
