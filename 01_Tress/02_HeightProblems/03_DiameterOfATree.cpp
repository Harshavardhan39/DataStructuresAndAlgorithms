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

int Height(Node *root, int &diameter) {
	if (root == nullptr) return 0;

	int leftHeight = Height(root->left, diameter);
	int rightHeight = Height(root->right, diameter);

	diameter = max(diameter, leftHeight + rightHeight);

	return 1 + max(leftHeight, rightHeight);
}

int DiameterOfATree(Node *root) {
	int diameter = 0;
	Height(root, diameter);
	return diameter;
}

void ganesha() {
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	root->right->left->right = new Node(8);
	root->right->left->right->left = new Node(9);

	cout << DiameterOfATree(root) << endl;
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