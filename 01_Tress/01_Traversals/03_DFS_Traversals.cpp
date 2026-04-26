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

void Inorder(Node *root) {
	if (root == nullptr) return;

	Inorder(root->left);
	cout << root->data << " ";
	Inorder(root->right);
}

void Preorder(Node *root) {
	if (root == nullptr) return;

	cout << root->data << " ";
	Preorder(root->left);
	Preorder(root->right);
}

void Postorder(Node *root) {
	if (root == nullptr) return;

	Postorder(root->left);
	Postorder(root->right);
	cout << root->data << " ";
}

void ganesha() {
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);

	//Inorder(root);
	// Preorder(root);
	Postorder(root);
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