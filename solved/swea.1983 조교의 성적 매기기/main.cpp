#include <iostream>
#include <algorithm>
#include <string>

using std::cin; using std::cout; using std::string;

//string grade[10] = { "A+", "A0","A-","B+" ,"B0" ,"B-" ,"C+" ,"C0" ,"C-" ,"D0" };
string grade[10] = { "D0", "C-", "C0", "C+", "B-", "B0", "B+", "A-", "A0", "A+" };
int arr[100] = {};

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int n, k;
		cin >> n >> k;
		for (int i = 0; i < n; ++i) {
			int a, b, c;
			cin >> a >> b >> c;
			arr[i] = a * 7 + b * 9 + c * 4;
		}
		int save = arr[k - 1];
		std::sort(arr, arr + n);
		for (int i = 0; i < n; ++i) {
			if (arr[i] == save) {
				cout << '#' << citer << ' ' << grade[i * 10 / n] << '\n';
				break;
			}
		}
	}
}
