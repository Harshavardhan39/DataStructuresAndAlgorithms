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

bool isLeafNode(Node *root) {
	return (root->left == nullptr && root->right == nullptr);
}

void TraverseLeft(Node *root, vector<int> &res) {
	Node *curr = root->left;
	while (curr) {
		if (!isLeafNode(curr)) {
			res.push_back(curr->data);
		}
		if (curr->left != nullptr) {
			curr = curr->left;
		} else {
			curr = curr->right;
		}
	}
}

void TraverseRight(Node *root, vector<int> &res) {
	Node *curr = root->right;
	vector<int> temp;
	while (curr) {
		if (!isLeafNode(curr)) {
			temp.push_back(curr->data);
		}
		if (curr->right != nullptr) {
			curr = curr->right;
		} else {
			curr = curr->left;
		}
	}
	for (int i = temp.size() - 1; i >= 0; i--) {
		res.push_back(temp[i]);
	}
}

void TraverseLeafNodes(Node *root, vector<int> &res) {
	if (root == nullptr) return;

	TraverseLeafNodes(root->left, res);
	if (isLeafNode(root)) {
		res.push_back(root->data);
	}
	TraverseLeafNodes(root->right, res);
}

vector<int> BoundaryTraversal(Node *root) {
	vector<int> result;
	if (root == nullptr) {
		return result;
	}
	if (!isLeafNode(root)) {
		result.push_back(root->data);
	}
	TraverseLeft(root, result);
	TraverseLeafNodes(root, result);
	TraverseRight(root, result);
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

	vector<int> result = BoundaryTraversal(root);
	for (auto it : result) {
		cout << it <<  " ";
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