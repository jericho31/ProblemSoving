#include <iostream>
#include <cstring>
#include <numeric>

using std::cin; using std::cout;

class Othello
{
public:
	int table[8][8];
	int n;

	Othello(int n)
	{
		std::memset(table, 0, sizeof(table));
		this->n = n;
		table[n / 2 - 1][n / 2 - 1] = 2;
		table[n / 2][n / 2] = 2;
		table[n / 2 - 1][n / 2] = 1;
		table[n / 2][n / 2 - 1] = 1;
	}

	void put(int x, int y, int c)
	{
		table[x][y] = c;
		int xl = x, xr = x, yl = y, yr = y;
		bool b[8];
		std::memset(b, 1, sizeof(b));
		while (std::accumulate(b, b + 8, 0) != 0) {
			--xl; ++xr; --yl; ++yr;
			if (xl < 0) {
				b[0] = b[4] = b[6] = false;
			}
			if (xr >= n) {
				b[1] = b[5] = b[7] = false;
			}
			if (yl < 0) {
				b[2] = b[4] = b[7] = false;
			}
			if (yr >= n) {
				b[3] = b[5] = b[6] = false;
			}
			if (b[0]) {
				if (table[xl][y] == c) {
					for (int xx = xl + 1; xx < x; ++xx) {
						table[xx][y] = c;
					}
					b[0] = false;
				}
				if (table[xl][y] == 0) b[0] = false;
			}
			if (b[1]) {
				if (table[xr][y] == c) {
					for (int xx = xr - 1; xx > x; --xx) {
						table[xx][y] = c;
					}
					b[1] = false;
				}
				if (table[xr][y] == 0) b[1] = false;
			}
			if (b[2]) {
				if (table[x][yl] == c) {
					for (int yy = yl + 1; yy < y; ++yy) {
						table[x][yy] = c;
					}
					b[2] = false;
				}
				if (table[x][yl] == 0) b[2] = false;
			}
			if (b[3]) {
				if (table[x][yr] == c) {
					for (int yy = yr - 1; yy > y; --yy) {
						table[x][yy] = c;
					}
					b[3] = false;
				}
				if (table[x][yr] == 0) b[3] = false;
			}
			if (b[4]) {
				if (table[xl][yl] == c) {
					int xx = xl + 1, yy = yl + 1;
					while (xx < x) {
						table[xx][yy] = c;
						++xx; ++yy;
					}
					b[4] = false;
				}
				if (table[xl][yl] == 0) b[4] = false;
			}
			if (b[5]) {
				if (table[xr][yr] == c) {
					int xx = xr - 1, yy = yr - 1;
					while (xx > x) {
						table[xx][yy] = c;
						--xx; --yy;
					}
					b[5] = false;
				}
				if (table[xr][yr] == 0) b[5] = false;
			}
			if (b[6]) {
				if (table[xl][yr] == c) {
					int xx = xl + 1, yy = yr - 1;
					while (xx < x) {
						table[xx][yy] = c;
						++xx; --yy;
					}
					b[6] = false;
				}
				if (table[xl][yr] == 0) b[6] = false;
			}
			if (b[7]) {
				if (table[xr][yl] == c) {
					int xx = xr - 1, yy = yl + 1;
					while (xx > x) {
						table[xx][yy] = c;
						--xx; ++yy;
					}
					b[7] = false;
				}
				if (table[xr][yl] == 0) b[7] = false;
			}
		}
	}

	void printResult(int citer)
	{
		int b = 0, w = 0;
		for (int j = 0; j < n; ++j) {
			for (int i = 0; i < n; ++i) {
				if (table[j][i] == 1) ++b;
				else if (table[j][i] == 2) ++w;
			}
		}
		cout << '#' << citer << ' ' << b << ' ' << w << '\n';
	}

	//void printTable()  //check
	//{
	//	for (int j = 0; j < n; ++j) {
	//		cout << '\t';
	//		for (int i = 0; i < n; ++i) {
	//			cout << table[j][i] << ' ';
	//		}
	//		cout << '\n';
	//	}
	//}
};

int main()
{
	int ctotal;
	cin >> ctotal;
	for (int citer = 1; citer <= ctotal; ++citer)
	{
		int n, m;
		cin >> n >> m;
		Othello O(n);
		//O.printTable();  //check
		for (int i = 0; i < m; ++i) {
			int x, y, c;
			cin >> x >> y >> c;
			O.put(x - 1, y - 1, c);
			//O.printTable();  //check
		}
		O.printResult(citer);
	}
}
