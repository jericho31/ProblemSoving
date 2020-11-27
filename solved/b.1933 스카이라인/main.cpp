#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using std::cin; using std::cout; using std::vector;

class EP  // Event Point
{
public:
	int x, h;

	EP() : x(0), h(0) {}
};

vector<EP*> vep;
int N = 0;

//void printvep()  // check
//{
//	cout << '\n';
//	for (const auto& ep : vep) {
//		cout << ep->x << ' ' << ep->h << '\n';
//	}
//	cout << '\n';
//}

void printvi(const vector<int> &v)
{
	for (const auto& i : v) {
		cout << i << ' ';
	}
	cout << '\n';
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; ++i) {
		int l, h, r;
		cin >> l >> h >> r;
		auto ep1 = new EP;
		vep.push_back(ep1);
		auto ep2 = new EP;
		vep.push_back(ep2);
		ep1->x = l;
		ep1->h = h;
		ep2->x = r;
		ep2->h = -h;
	}
	//printvep();  // check
	std::sort(vep.begin(), vep.end(),
		[](const EP* a, const EP* b)->bool {
			if (a->x < b->x) return true;
			if (a->x > b->x) return false;
			return a->h > b->h;
		});
	//printvep();  // check
	
	vector<int> result;
	std::multiset<int> ms;
	ms.insert(0);
	int curh = 0;
	for (int i = 0; i < (int)vep.size(); ++i) {
		if (vep[i]->h > 0) {
			ms.insert(vep[i]->h);
			//cout << "push " << vep[i]->h << '\n';  // check
			//printvi(high.vh);  // check
		}
		else {
			ms.erase(ms.find(-vep[i]->h));
			//cout << "pop " << -vep[i]->h << '\n';  // check
			//printvi(high.vh);  // check
		}

		if (i + 1 < (int)vep.size()) {
			if (vep[i]->x != vep[i + 1]->x) {
				if (curh != *--ms.end()) {
					result.push_back(vep[i]->x);
					result.push_back(*--ms.end());
					curh = *--ms.end();
				}
			}
		}
		else {  // vep ¸¶Áö¸·
			if (curh != 0) {
				result.push_back(vep[i]->x);
				result.push_back(0);
			}
		}
	}

	printvi(result);

	return 0;
}
