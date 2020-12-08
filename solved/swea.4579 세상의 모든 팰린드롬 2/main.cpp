#include <iostream>
#include <string>

using std::cin; using std::cout; using std::string;

void printok(int citer)
{
	cout << '#' << citer << " Exist\n";
}

void printng(int citer)
{
	cout << '#' << citer << " Not exist\n";
}

bool isPalindrome(string s)
{
	int l = 0, r = (int)s.size() - 1;
	while (l < r) {
		if (s[l] == '*' || s[r] == '*') {
			return true;
		}
		if (s[l++] != s[r--]) {
			return false;
		}
	}
	return true;
}

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		string s;
		cin >> s;
		if (isPalindrome(s)) {
			printok(citer);
			continue;
		}
		printng(citer);
	}
}
