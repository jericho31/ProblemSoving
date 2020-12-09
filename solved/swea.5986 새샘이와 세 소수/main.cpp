/*
뭐 좋은 방법 있나 했는데 그냥 완전탐색
*/

#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::vector;

bool isPrime[1000] = {};
vector<int> vPrime;
int numberOfCases[1000] = {};

int main()
{
	vPrime.push_back(2);
	for (int i = 3; i <= 999; i += 2) {
		isPrime[i] = true;
	}
	for (int i = 3; i <= 999; i += 2) {
		if (isPrime[i]) {
			vPrime.push_back(i);
			for (int j = i * 3; j <= 999; j += i * 2) {
				isPrime[j] = false;
			}
		}
	}

	for (int i = 0; i < (int)vPrime.size(); ++i) {
		for (int j = i; j < (int)vPrime.size(); ++j) {
			for (int k = j; k < (int)vPrime.size(); ++k) {
				if (vPrime[i] + vPrime[j] + vPrime[k] <= 999) {
					++numberOfCases[vPrime[i] + vPrime[j] + vPrime[k]];
				}
			}
		}
	}

	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int n;
		cin >> n;
		cout << '#' << citer << ' ' << numberOfCases[n] << '\n';
	}
}
