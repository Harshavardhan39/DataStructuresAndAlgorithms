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

int HeightOfTree(Node *root) {
	if (root == nullptr) return 0;

	int leftHeight = HeightOfTree(root->left);
	if (leftHeight == -1) return -1;

	int rightHeight = HeightOfTree(root->right);
	if (rightHeight == -1) return -1;

	// if difference between left sub tree
	//and right subtree is greater than
	// 1 then it is not a balanced binary tree
	if (abs(leftHeight - rightHeight) > 1) {
		return -1;
	}

	return 1 + max(leftHeight, rightHeight);
}

bool CheckForBalancedBinaryTree(Node *root) {
	return HeightOfTree(root) != -1;
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
	//root->right->left->right->left = new Node(9);

	cout << CheckForBalancedBinaryTree(root) << endl;
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