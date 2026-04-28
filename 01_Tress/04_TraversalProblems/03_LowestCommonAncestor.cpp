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

int LowestCommonAncestor(Node *root, int a, int b) {
	if (root == nullptr) return -1;

	if (root->data == a || root->data == b) {
		return root->data;
	}

	int left = LowestCommonAncestor(root->left, a, b);
	int right = LowestCommonAncestor(root->right, a , b);

	if (left == -1) {
		return right;
	} else if (right == -1) {
		return left;
	} else {
		return root->data;
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
	root->left->left->left = new Node(8);
	root->left->left->right = new Node(9);
	root->left->right->left = new Node(10);
	root->left->right->right = new Node(11);
	root->right->left->left = new Node(12);
	root->right->left->right = new Node(13);
	root->right->right->left = new Node(14);
	root->right->right->right = new Node(15);

	cout << LowestCommonAncestor(root, 7, 14) << endl;
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