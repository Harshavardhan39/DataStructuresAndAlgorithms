#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	Node *left;
	Node *right;

	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};

void ZigZagTraversal(Node *root) {
	if (root == nullptr) return;

	queue<Node*> q;
	q.push(root);

	bool leftToRight = true;

	while (!q.empty()) {
		int size = q.size();

		vector<int> temp(size);
		for (int i = 0; i < size; i++) {
			Node *curr = q.front();
			q.pop();

			int index = (leftToRight) ? i : size - i - 1;
			temp[index] = curr->data;

			if (curr->left != nullptr) {
				q.push(curr->left);
			}
			if (curr->right != nullptr) {
				q.push(curr->right);
			}
		}

		for (auto it : temp) {
			cout << it << " ";
		}
		cout << endl;
		leftToRight = !leftToRight;
	}
}

void ganesha() {
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);

	ZigZagTraversal(root);
}















void execution() {

#ifndef ONLINE_JUDGE
	freopen("../../radhaKrishna.txt", "r", stdin);
	freopen("../../satyaNarayanaSwamy.txt", "w", stdout);
#endif

}

int main() {

	execution();

	ganesha();

	return 0;

}