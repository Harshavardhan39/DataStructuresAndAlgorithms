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

bool Traverse(Node *root, int node, vector<int> &result) {
	if (root == nullptr) return false;

	result.push_back(root->data);

	if (root->data == node) {
		return true;
	}

	if (Traverse(root->left, node, result) == true) {
		return true;
	}

	if (Traverse(root->right, node, result) == true) {
		return true;
	}

	result.pop_back();

	return false;
}

vector<int> RootToNode(Node *root, int node) {
	vector<int> result;
	Traverse(root, node, result);
	return result;
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

	vector<int> result = RootToNode(root, 11);

	for (auto it : result) {
		cout << it << " ";
	}
	cout << endl;
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