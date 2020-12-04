#include <iostream>
#include <cstring>

using std::cin; using std::cout;

char s[100001];
int main()
{
	int n;
	cin >> n;
	memset(s, 0, 100001);
	memset(s, '#', n);
	cout << s << '\n';
}
