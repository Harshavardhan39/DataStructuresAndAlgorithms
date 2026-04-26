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

void IterativePostorder(Node *root) {
	if (root == nullptr) return;

	stack<Node*> st1, st2;
	st1.push(root);

	while (!st1.empty()) {
		Node *curr = st1.top();
		st1.pop();

		st2.push(curr);

		if (curr->left != nullptr) {
			st1.push(curr->left);
		}

		if (curr->right != nullptr) {
			st1.push(curr->right);
		}
	}

	while (!st2.empty()) {
		Node *curr = st2.top();
		st2.pop();
		cout << curr->data << " ";
	}
	cout << endl;
}

void ganesha() {
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);

	IterativePostorder(root);
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