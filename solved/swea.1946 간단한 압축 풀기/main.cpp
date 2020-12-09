#include <iostream>
#include <string>

using std::cin; using std::cout; using std::string;

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int n;
		cin >> n;
		string s = "";
		int cnt = 0;
		for (int i = 0; i < n; ++i) {
			char c;
			int a;
			cin >> c >> a;
			while (--a >= 0) {
				if (++cnt % 10 == 1) {
					// 시작 시 줄 바꿈 넣으면서 시작. 마지막을 \n으로 끝내지 않기 위함도 있다.
					s += '\n';
				}
				s += c;
			}
		}
		cout << '#' << citer << s << '\n';
	}
}
