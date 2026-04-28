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

// Symetrical -> if it forms mirror of itself from the root

bool isSymmetrical(Node *left, Node *right) {
	if (left == nullptr || right == nullptr)
		return (left == right);

	return (left->data == right->data) &&
	       isSymmetrical(left->left, right->right) &&
	       isSymmetrical(left->right, right->left);
}

bool CheckIfSymmetrical(Node *root) {
	return root == nullptr ||
	       isSymmetrical(root->left, root->right);
}

void ganesha() {
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(2);
	root->left->left = new Node(3);
	root->left->right = new Node(4);
	root->right->left = new Node(4);
	root->right->right = new Node(3);

	cout << CheckIfSymmetrical(root) << endl;
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