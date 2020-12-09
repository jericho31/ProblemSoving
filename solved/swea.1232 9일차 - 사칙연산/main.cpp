#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using std::cin; using std::cout; using std::vector; using std::string;

class Node;
class Node
{
public:
	double val = 0;
	Node* left = nullptr;
	Node* right = nullptr;

	Node(int val, Node* left = nullptr, Node* right = nullptr) : val(val), left(left), right(right) {}

	double getValue()
	{
		if (val >= 0) {
			return val;
		}

		switch ((int)val)
		{
		case -1: {
			return val = left->getValue() + right->getValue();
		} break;
		case -2: {
			return val = left->getValue() - right->getValue();
		} break;
		case -3: {
			return val = left->getValue() * right->getValue();
		} break;
		case -4: {
			return val = left->getValue() / right->getValue();
		} break;
		}
		
		throw std::runtime_error("getvalue() error");
	}
};

int main()
{
	for (int citer = 1; citer <= 10; ++citer)
	{
		int n;
		cin >> n;
		vector<Node*> vNode;
		for (int i = 0; i <= n; ++i) {
			vNode.push_back(new Node(0));
		}
		for (int i = 1; i <= n; ++i) {
			string s;
			cin >> s >> s;
			if (s[0] >= '0' && s[0] <= '9') {
				vNode[i]->val = std::atoi(s.c_str());
			}
			else {
				int l, r;
				cin >> l >> r;
				vNode[i]->left = vNode[l];
				vNode[i]->right = vNode[r];
				switch (s[0])
				{
				case '+': {
					vNode[i]->val = -1;
				} break;
				case '-': {
					vNode[i]->val = -2;
				} break;
				case '*': {
					vNode[i]->val = -3;
				} break;
				case '/': {
					vNode[i]->val = -4;
				} break;
				}
			}
		}
		cout << '#' << citer << ' ' << vNode[1]->getValue() << '\n';
	}
}
