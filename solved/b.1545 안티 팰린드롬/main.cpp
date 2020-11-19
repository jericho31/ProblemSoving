#include <iostream>
#include <string>
#include <algorithm>

using std::cin; using std::cout; using std::string;

/*
¹®ÀÚ¿­ Á¤·ÄÇÏ°í, °ãÄ¡´Â °Ç Áß¾Ó.
¿ÞÂÊ °³¼ö¸¸Å­¸¸ ¿À¸¥ÂÊ¿¡¼­ ¹Ð¾îÁÖ¸é µÊ. (È¦Â¦ ³ª´²¼­)
*/

int main()
{
	string s1;
	cin >> s1;
	const int n = s1.length();
	if (n == 1) {
		cout << s1 << '\n';
		return 0;
	}
	//cout << s1 << '\n';  //check
	std::sort(s1.begin(), s1.end(),
		[](const char a, const char b)->bool { return a < b; });
	//cout << s1 << '\n';  //check

	if (n % 2 == 0) {
		if (s1[n / 2 - 1] == s1[n / 2]) {
			char c = s1[n / 2];
			int left = 1, right = 1;
			for (int i = n / 2 - 2; i >= 0; --i) {
				if (c != s1[i]) break;
				else ++left;
			}
			for (int i = n / 2 + 1; i < n; ++i) {
				if (c != s1[i]) break;
				else ++right;
			}
			if (left + right > n / 2) goto FAIL;

			int cur = n / 2;
			for (int i = 0; i < left; ++i) {
				s1[cur] = s1[cur + right];
				++cur;
			}
			for (int i = 0; i < right; ++i) {
				s1[cur] = c;
				++cur;
			}
		}
	}
	else {
		if (s1[n / 2 - 1] == s1[n / 2 + 1]) {
			char c = s1[n / 2];
			int left = 1, right = 1;
			for (int i = n / 2 - 2; i >= 0; --i) {
				if (c != s1[i]) break;
				else ++left;
			}
			for (int i = n / 2 + 2; i < n; ++i) {
				if (c != s1[i]) break;
				else ++right;
			}
			if (left + right > n / 2) goto FAIL;

			int cur = n / 2 + 1;
			for (int i = 0; i < left; ++i) {
				s1[cur] = s1[cur + right];
				++cur;
			}
			for (int i = 0; i < right; ++i) {
				s1[cur] = c;
				++cur;
			}
		}
	}

	cout << s1 << '\n';

	return 0;

FAIL:
	cout << "-1" << '\n';
	return 0;
}
