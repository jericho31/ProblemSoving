#include <iostream>
#include <string>
#include <stdexcept>

using std::cin; using std::cout; using std::string;

typedef unsigned int uint;

uint decode1(char c)
{
	if (c >= 'A' && c <= 'Z') {
		return c - 'A';
	}
	else if (c >= 'a' && c <= 'z') {
		return c - 'a' + 26;
	}
	else if (c >= '0' && c <= '9') {
		return c - '0' + 52;
	}
	else if (c == '+') {
		return 62;
	}
	else if (c == '/') {
		return 63;
	}
	else {
		throw std::runtime_error("decode1 input error.");
	}
}

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		string s;
		cin >> s;
		string result = "";
		for (int i = 0; i < (int)s.size(); i += 4) {
			uint arr[4];
			arr[0] = decode1(s[i]);
			arr[1] = decode1(s[i + 1]);
			arr[2] = decode1(s[i + 2]);
			arr[3] = decode1(s[i + 3]);
			uint ui = 0;
			ui = (arr[0] << 18) + (arr[1] << 12) + (arr[2] << 6) + (arr[3]);
			result += (char)(ui << 8 >> 24);
			result += (char)(ui << 16 >> 24);
			result += (char)(ui << 24 >> 24);
		}
		cout << '#' << citer << ' ' << result << '\n';
	}
}
